#riscv-gnu-toolchain repository absolute root directory
toolchain_dir=
#rvv-gnu-cases absolute directory
cases_dir=
#shell script directory
script_dir=$(cd $(dirname $0);pwd)

while [ $# -gt 0 ] ; do
  case "$1" in
    --gnu-toolchain-root)
      toolchain_dir=$2
      shift 2
      ;;
    --gnu-tests-root)
      cases_dir=$2
      shift 2
      ;;
    --) shift;
      break
      ;;
  esac
done
shift "$(($OPTIND -1))"

#make report
cd $toolchain_dir
make clean
./configure --prefix="$PWD/opt-rvv64gc" --with-arch=rv64gcv --with-abi=lp64d --with-isa-spec=20191213 --with-sim=qemu
make -j $(nproc) build-sim SIM=qemu

mkdir -p gcc/gcc/testsuite/gcc.target/riscv/rvv/gnu-auto-generated/gnu-api-tests
mkdir -p gcc/gcc/testsuite/gcc.target/riscv/rvv/gnu-auto-generated/gnu-overloaded-tests
mkdir -p gcc/gcc/testsuite/gcc.target/riscv/rvv/gnu-auto-generated/policy_funcs/gnu-api-tests
mkdir -p gcc/gcc/testsuite/gcc.target/riscv/rvv/gnu-auto-generated/policy_funcs/gnu-overloaded-tests

mkdir -p gcc/gcc/testsuite/g++.target/riscv/rvv/gnu-auto-generated/gnu-api-tests
mkdir -p gcc/gcc/testsuite/g++.target/riscv/rvv/gnu-auto-generated/gnu-overloaded-tests
mkdir -p gcc/gcc/testsuite/g++.target/riscv/rvv/gnu-auto-generated/policy_funcs/gnu-api-tests
mkdir -p gcc/gcc/testsuite/g++.target/riscv/rvv/gnu-auto-generated/policy_funcs/gnu-overloaded-tests

cp $script_dir/gcc-auto-generated.exp gcc/gcc/testsuite/gcc.target/riscv/rvv/gnu-auto-generated/gnu-auto-generated.exp
cp $script_dir/g++-auto-generated.exp gcc/gcc/testsuite/g++.target/riscv/rvv/gnu-auto-generated/gnu-auto-generated.exp

cp -r $cases_dir/gnu-api-tests/* $toolchain_dir/gcc/gcc/testsuite/gcc.target/riscv/rvv/gnu-auto-generated/gnu-api-tests/
cp -r $cases_dir/gnu-overloaded-tests/* $toolchain_dir/gcc/gcc/testsuite/gcc.target/riscv/rvv/gnu-auto-generated/gnu-overloaded-tests/
cp -r $cases_dir/policy_funcs/gnu-api-tests/* $toolchain_dir/gcc/gcc/testsuite/gcc.target/riscv/rvv/gnu-auto-generated/policy_funcs/gnu-api-tests/
cp -r $cases_dir/policy_funcs/gnu-overloaded-tests/* $toolchain_dir/gcc/gcc/testsuite/gcc.target/riscv/rvv/gnu-auto-generated/policy_funcs/gnu-overloaded-tests/

cp -r $cases_dir/gnu-api-tests/* $toolchain_dir/gcc/gcc/testsuite/g++.target/riscv/rvv/gnu-auto-generated/gnu-api-tests/
cp -r $cases_dir/gnu-overloaded-tests/* $toolchain_dir/gcc/gcc/testsuite/g++.target/riscv/rvv/gnu-auto-generated/gnu-overloaded-tests/
cp -r $cases_dir/policy_funcs/gnu-api-tests/* $toolchain_dir/gcc/gcc/testsuite/g++.target/riscv/rvv/gnu-auto-generated/policy_funcs/gnu-api-tests/
cp -r $cases_dir/policy_funcs/gnu-overloaded-tests/* $toolchain_dir/gcc/gcc/testsuite/g++.target/riscv/rvv/gnu-auto-generated/policy_funcs/gnu-overloaded-tests/
make report -j $(nproc) RUNTESTFLAGS="gnu-auto-generated.exp"
