CC = gcc
CXX = g++
AR = ar
STRIP = strip
LCOV = lcov
GENHTML = genhtml

CFLAGS += -O2
CXXFLAGS += -O2
LDFLAGS +=

CXXFLAGS += -I. -Ivendor/igloo

all: release

compile: test_runner

test: compile
	./test_runner

release: compile test
	${STRIP} test_runner

coverage: CXXFLAGS += --coverage
coverage: LDFLAGS += --coverage
coverage: test generate.coverage.report

generate.coverage.report:
	${LCOV} --capture --directory . --output-file coverage.info
	${LCOV} --extract coverage.info "${PWD}/rectangle.cpp" -o coverage.filtered.info
	${GENHTML} coverage.filtered.info --output-directory coverage

clean:
	rm -rf *.o test_runner *.info *.gcda *.gcno coverage*

test_runner: rectangle_test.o rectangle.o test_runner.o
	${CXX} -o test_runner rectangle.o *_test.o test_runner.o ${LDFLAGS}

test_runner.o: test_runner.cpp

rectangle_test.o: rectangle_test.cpp rectangle.h

rectangle.o: rectangle.cpp rectangle.h

%.o: %.cpp
	${CXX} -c -o $@ $< ${CXXFLAGS}

.PHONY: clean generate.coverage.report
