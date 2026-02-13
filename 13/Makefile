# Include default flags
include ../Makefile.conf

# Executables to build
EXECS = fraction_example polynomial_example

# --- Build Rules ---

.PHONY: all clean

all: $(EXECS)

# Rule for fraction_example
# List all source files required for this specific executable
fraction_example: fraction_example.cpp polynomial.cpp fraction.cpp
	$(CXX) $(CXXFLAGS) $^ $(LDFLAGS) -o $@

# Rule for polynomial_example
polynomial_example: polynomial_example.cpp polynomial.cpp fraction.cpp
	$(CXX) $(CXXFLAGS) $^ $(LDFLAGS) -o $@

# Generic rule for any other single-file .cpp programs
%: %.cpp
	$(CXX) $(CXXFLAGS) $< $(LDFLAGS) -o $@

# --- Cleanup ---

clean:
	rm -rf $(EXECS) *.dSYM