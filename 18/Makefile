# Default Makefile used for the C++ programming course at U.Porto 2025/2026

# Configure flags first
CXX=g++
CXXFLAGS= -g \
          -std=c++17 \
          -Wall \
          -pedantic -Wuninitialized \
          -Werror \
          -fsanitize=address \
          -fsanitize=undefined \
          $(EXTRA)

LDFLAGS=-lm  # linking to mathematical libraries

# rule to build an executable "f" from "f.cpp" using flags above
%: %.cpp
	$(CXX) $*.cpp $(CXXFLAGS) $(LDFLAGS) -o $@

# Sources are all cpp files in the folder
SOURCES = $(wildcard *.cpp)

# executables are all files "f" for which a "f.cpp" exists
# Adapt if needed
EXECS = $(SOURCES:%.cpp=%)

# default when just typing "make"
all: $(EXECS)

# removes all executables and auxiliary files
clean:
	rm -fr $(EXECS) $(SOURCES:%.cpp=%.dSYM)
