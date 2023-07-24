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

mkdir gcc/gcc/testsuite/gcc.target/riscv/rvv/gnu-auto-generated/
cp $script_dir/gnu-auto-generated.exp gcc/gcc/testsuite/gcc.target/riscv/rvv/gnu-auto-generated/
cp -r $cases_dir/* $toolchain_dir/gcc/gcc/testsuite/gcc.target/riscv/rvv/gnu-auto-generated/
make report -j $(nproc) RUNTESTFLAGS="gnu-auto-generated.exp"
