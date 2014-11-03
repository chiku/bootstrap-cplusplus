CC = gcc
CXX = g++
AR = ar
STRIP = strip
LCOV = lcov
GENHTML = genhtml

CFLAGS += -O2
CXXFLAGS += -O2

CXXFLAGS += -I. -Ivendor/gtest-1.7.0/include
LDFLAGS += -lpthread

all: release

compile: vendor test_runner

test: compile
	./test_runner

release: compile test
	${STRIP} test_runner

vendor:
	cd vendor/gtest-1.7.0 && rm -rf build && mkdir build && cd build && cmake .. && make

coverage: CXXFLAGS += --coverage
coverage: LDFLAGS += --coverage
coverage: test generate.coverage.report

generate.coverage.report:
	${LCOV} --capture --directory . --output-file coverage.info
	${LCOV} --extract coverage.info "${PWD}/rectangle.cpp" -o coverage.filtered.info
	${GENHTML} coverage.filtered.info --output-directory coverage

clean:
	rm -rf *.o test_runner *.info *.gcda *.gcno coverage* vendor/gtest-1.7.0/build

test_runner: rectangle_test.o rectangle.o test_runner.o
	${CXX} -o test_runner rectangle.o *_test.o test_runner.o vendor/gtest-1.7.0/build/libgtest.a vendor/gtest-1.7.0/build/libgtest_main.a ${LDFLAGS}

test_runner.o: test_runner.cpp

rectangle_test.o: rectangle_test.cpp rectangle.h

rectangle.o: rectangle.cpp rectangle.h

.PHONY: all compile release vendor coverage generate.coverage.report clean
