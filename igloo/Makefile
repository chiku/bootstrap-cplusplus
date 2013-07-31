
CC = gcc
CXX = g++
AR = ar
STRIP = strip
LCOV = lcov
GENHTML = genhtml

CFLAGS += -O2
CXXFLAGS += -O2
LDFLAGS +=

CXXFLAGS += -I.

all: compile test clean

compile: rectangle_test

test: compile
	./rectangle_test

release: compile test
	${STRIP} rectangle_test

coverage: CXXFLAGS += --coverage
coverage: LDFLAGS += --coverage
coverage: test generate.coverage.report

generate.coverage.report:
	${LCOV} --capture --directory . --output-file coverage.info
	${LCOV} --extract coverage.info "${PWD}/rectangle.cpp" -o coverage.filtered.info
	${GENHTML} coverage.filtered.info --output-directory coverage

clean:
	rm -rf *.o rectangle_test *.info *.gcda *.gcno coverage*

rectangle_test: rectangle_test.o rectangle.o
	${CXX} -o rectangle_test *.o ${LDFLAGS}

rectangle_test.o: rectangle_test.cpp rectangle.cpp rectangle.h

rectangle.o: rectangle.cpp rectangle.h

%.o: %.cpp
	${CXX} -c -o $@ $< ${CXXFLAGS}

.PHONY: clean generate.coverage.report
