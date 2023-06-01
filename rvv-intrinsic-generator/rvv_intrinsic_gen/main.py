"""
--------------------------------------------------------------------------------
Copyright 2022 SiFive Inc

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
--------------------------------------------------------------------------------

Main entry of the generator
"""

import argparse
import sys
import os
import importlib.util
import inspect
import inst
import vector_crypto_inst
import generator

from enums import ToolChainType


def get_gen_from_vendor(vendor_inst_filepath):
  if vendor_inst_filepath is None:
    return None
  if not os.path.isfile(vendor_inst_filepath):
    print("File does not exist in path of --vendor-inst, ignoring the option")
    return None
  spec = importlib.util.spec_from_file_location("", vendor_inst_filepath)
  vendor_module = importlib.util.module_from_spec(spec)
  vendor_module.__package__ = __package__

  if spec is None or spec.loader is None:
    print("Cannot load module with spec")

  spec.loader.exec_module(vendor_module)  # pytype: disable=attribute-error
  if not hasattr(vendor_module, "gen"):
    print("File does not have a attribute named 'gen'")
    return None
  if not inspect.isfunction(vendor_module.gen):
    print("The attribute in file is not a function")
    print("Please specify a function that takes a Generator")
    return None

  return vendor_module.gen


def get_generator_from_vendor(vendor_generator_filepath,
                              vendor_generator_class_name):
  if vendor_generator_filepath is None or\
     vendor_generator_class_name is None:
    return None
  if not os.path.isfile(vendor_generator_filepath):
    print("File does not exist in path of --vendor-generator-script,",
          "ignoring the option")
    return None
  spec = importlib.util.spec_from_file_location("", vendor_generator_filepath)
  vendor_module = importlib.util.module_from_spec(spec)
  vendor_module.__package__ = __package__

  if spec is None or spec.loader is None:
    print("Cannot load module with spec")
  spec.loader.exec_module(vendor_module)  # pytype: disable=attribute-error
  if not hasattr(vendor_module, vendor_generator_class_name):
    print("File does not have a attribute named",
          f"'{vendor_generator_class_name}'")
    return None
  return getattr(vendor_module, vendor_generator_class_name)


def main():

  class GenTypes:
    NON_OVERLOADED_DOC = 0
    NON_OVERLOADED_DOCS = 1
    OVERLOADED_DOC = 2
    OVERLOADED_DOCS = 3
    NON_OVERLOADED_TEST = 4
    OVERLOADED_TEST = 5
    NON_OVERLOADED_COMPATIBLE_HEADER = 6
    OVERLOADED_COMPATIBLE_HEADER = 7

  parser = argparse.ArgumentParser()
  parser.add_argument(
      "--gen",
      default="non-overloaded-doc",
      choices=[
          "non-overloaded-doc", "non-overloaded-docs", "overloaded-doc",
          "overloaded-docs", "non-overloaded-test", "overloaded-test",
          "non-overloaded-compatible-header", "overloaded-compatible-header"
      ])
  parser.add_argument("--toolchain-type", default=ToolChainType.UNKNOWN)
  parser.add_argument("--has-policy", default=False, action="store_true")
  parser.add_argument("--vendor-inst")
  parser.add_argument("--skip-default-inst", default=False, action="store_true")
  parser.add_argument("--vendor-generator-script")
  parser.add_argument("--vendor-generator-name")
  parser.add_argument("--gen-vector-crypto", default=False, action="store_true")
  parser.add_argument("--out")
  args = parser.parse_args()

  vendor_gen = get_gen_from_vendor(args.vendor_inst)
  if vendor_gen is not None:
    print("Recognized 'gen' function through --vendor-inst path",
          f"'{args.vendor_inst}'")
  vendor_generator =\
    get_generator_from_vendor(args.vendor_generator_script,
                              args.vendor_generator_name)
  # If a vendor generator is specified, the --gen option will be ignored
  if vendor_generator is not None:
    print("Recognized generator through --vendor-generator-script path",
          f"'{args.vendor_generator_script}'")
    print(f"Triggering the generator {args.vendor_generator_name}")
    with open(args.out, "w", encoding="utf-8") as f:
      g = vendor_generator(f, args.has_policy)
      if not args.skip_default_inst:
        inst.gen(g)
      else:
        print("Skipping default RVV instructions (--skip-default-inst)")
      if vendor_gen is not None:
        vendor_gen(g)
      g.report_summary()
    return

  mode = getattr(GenTypes, args.gen.replace("-", "_").upper())

  if mode in [
      GenTypes.NON_OVERLOADED_DOC, GenTypes.OVERLOADED_DOC,
      GenTypes.NON_OVERLOADED_COMPATIBLE_HEADER,
      GenTypes.OVERLOADED_COMPATIBLE_HEADER
  ]:
    # Vector crypto does not need compatible header because we don't have
    # them before v0.10
    if mode in (GenTypes.NON_OVERLOADED_COMPATIBLE_HEADER,
                GenTypes.OVERLOADED_COMPATIBLE_HEADER) and\
       args.gen_vector_crypto:
      return
    with open(args.out, "w", encoding="utf-8") as f:
      if mode == GenTypes.NON_OVERLOADED_DOC:
        g = generator.DocGenerator(f, True, args.has_policy)
      elif mode == GenTypes.OVERLOADED_DOC:
        g = generator.OverloadedDocGenerator(f, True, args.has_policy)
      elif mode == GenTypes.NON_OVERLOADED_COMPATIBLE_HEADER:
        g = generator.CompatibleHeaderGenerator(f, False, args.has_policy)
      elif mode == GenTypes.OVERLOADED_COMPATIBLE_HEADER:
        g = generator.CompatibleHeaderGenerator(f, True, args.has_policy)
      else:
        assert False

      if not args.skip_default_inst:
        if args.gen_vector_crypto:
          vector_crypto_inst.gen(g)
        else:
          inst.gen(g)
      else:
        print("Skipping default RVV instructions (--skip-default-inst)")
      if vendor_gen is not None:
        vendor_gen(g)
      g.report_summary()
      return
  elif mode == GenTypes.NON_OVERLOADED_DOCS:
    g = generator.DocGenerator(args.out, False, args.has_policy)
  elif mode == GenTypes.OVERLOADED_DOCS:
    g = generator.OverloadedDocGenerator(args.out, False, args.has_policy)
  elif mode == GenTypes.NON_OVERLOADED_TEST:
    g = generator.APITestGenerator(args.out, False,
                                   ToolChainType(args.toolchain_type),
                                   args.has_policy)

  elif mode == GenTypes.OVERLOADED_TEST:
    g = generator.APITestGenerator(args.out, True,
                                   ToolChainType(args.toolchain_type),
                                   args.has_policy)
  else:
    assert False
  if not args.skip_default_inst:
    if args.gen_vector_crypto:
      vector_crypto_inst.gen(g)
    else:
      inst.gen(g)
  else:
    print("Skipping default RVV instructions (--skip-default-inst)")
  if vendor_gen is not None:
    vendor_gen(g)
  if mode in (GenTypes.NON_OVERLOADED_TEST, GenTypes.OVERLOADED_TEST):
    g.post_gen()
  g.report_summary()
  return


if __name__ == "__main__":
  if not (sys.version_info.major == 3 and sys.version_info.minor >= 6):
    print("This script requires Python 3.6 or higher!")
    sys.exit(1)
  main()
