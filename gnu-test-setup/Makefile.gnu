TESTSUITE ?= TESTSUITE_PATH
RUNTEST := $(shell command -v runtest || echo "")

ifeq ($(RUNTEST),)
$(error "Error: runtest not found in PATH")
endif

TEST_TARGET:=gcc g++
PWD:=$(shell pwd)

.PHONY: all check clean

all: $(addsuffix .sum, $(TEST_TARGET))

check: all

gcc-parallel-%: site.exp
	mkdir -p gcc/$@
	cp site.exp gcc/$@
	sed -i 's/set tmpdir.*/set tmpdir "$(subst /,\/,$(PWD))\/gcc\/$@"/g' $(PWD)/gcc/$@/site.exp
	-cd gcc/$@ && $(RUNTEST) --tool gcc $(RUNTESTFLAGS)
	touch $$GCC_RUNTEST_PARALLELIZE_DIR/finished

g++-parallel-%: site.exp
	mkdir -p g++/$@
	cp site.exp g++/$@
	sed -i 's/set tmpdir.*/set tmpdir "$(subst /,\/,$(PWD))\/g++\/$@"/g' $(PWD)/g++/$@/site.exp
	-cd g++/$@ && $(RUNTEST) --tool g++ $(RUNTESTFLAGS)
	touch $$GCC_RUNTEST_PARALLELIZE_DIR/finished

gcc.sum: site.exp
	rm -rf $(PWD)/gcc/gcc-parallel
	mkdir -p $(PWD)/gcc/gcc-parallel
	export GCC_RUNTEST_PARALLELIZE_DIR=$(PWD)/gcc/gcc-parallel; \
	$(MAKE) $(addprefix gcc-parallel-,$(shell seq 40))
	-cd gcc && python3 $(TESTSUITE)/dg-extract-results.py -L */gcc.log > gcc.log
	-cd gcc && python3 $(TESTSUITE)/dg-extract-results.py */gcc.sum > gcc.sum
	cp gcc/gcc.log .
	cp gcc/gcc.sum .

g++.sum: site.exp
	rm -rf $(PWD)/g++/g++-parallel
	mkdir -p $(PWD)/g++/g++-parallel
	export GCC_RUNTEST_PARALLELIZE_DIR=$(PWD)/g++/g++-parallel; \
	$(MAKE) $(addprefix g++-parallel-,$(shell seq 40))
	-cd g++ && python3 $(TESTSUITE)/dg-extract-results.py -L */g++.log > g++.log
	-cd g++ && python3 $(TESTSUITE)/dg-extract-results.py */g++.sum > g++.sum
	cp g++/g++.log .
	cp g++/g++.sum .

clean:
	rm -rf *.log *.sum *.bc *.s gcc g++
