# Include default flags
include ../Makefile.conf

# Executables to build
EXECS = test_persons test_shapes

# --- Build Rules ---

.PHONY: all clean

all: $(EXECS)

# Rule for fraction_example
# List all source files required for this specific executable
test_persons: test_persons.cpp persons.cpp
	$(CXX) $(CXXFLAGS) $^ $(LDFLAGS) -o $@

# Rule for polynomial_example
test_shapes: test_shapes.cpp shapes.cpp coord2d.cpp
	$(CXX) $(CXXFLAGS) $^ $(LDFLAGS) -o $@

# Generic rule for any other single-file .cpp programs
%: %.cpp
	$(CXX) $(CXXFLAGS) $< $(LDFLAGS) -o $@

# --- Cleanup ---

clean:
	rm -rf $(EXECS) *.dSYM