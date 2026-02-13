# Include default flags
include ../Makefile.conf

# Executables to build
SOURCES = $(wildcard *.cpp)
EXECS = $(SOURCES:%.cpp=%)

# --- Build Rules ---

.PHONY: all clean

all: $(EXECS)

# Generic rule for any single-file .cpp programs
%: %.cpp
	$(CXX) $(CXXFLAGS) $< $(LDFLAGS) -o $@

# --- Cleanup ---

clean:
	rm -rf $(EXECS) *.dSYM