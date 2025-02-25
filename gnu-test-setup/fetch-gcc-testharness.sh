# make sure we have one argument which is the path of the GNU testsuite
if [ $# -ne 1 ]; then
    echo "Usage: $0 <path-to-gnu-testsuite>"
    exit 1
fi
git archive --remote=git://gcc.gnu.org/git/gcc.git HEAD contrib/dg-extract-results.py | tar -x --strip-components=1
git archive --remote=git://gcc.gnu.org/git/gcc.git HEAD gcc/testsuite/lib | tar -x --strip-components=2

# Move lib to testsuite/lib
mv lib $1
# Move dg-extract-results.py to testsuite
mv dg-extract-results.py $1
