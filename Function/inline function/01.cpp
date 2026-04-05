// An inline function in C++ is a function that the compiler tries to expand “in place” instead of making a normal function call. This can reduce function call overhead for small, frequently used functions.

#include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(5, 3); // 8
}

// The inline keyword suggests to the compiler:
// “Replace calls to this function with the function’s code directly.”
// Note: the compiler may ignore inline if the function is too complex

// Why Use Inline Functions?

// Advantages:

// Reduces function call overhead (no pushing/popping stack).
// Good for small, frequently called functions.
// Can be used in header files without causing multiple definition errors.

// Disadvantages:

// Large functions → code bloat (program size increases).
// The compiler may ignore inline if function is too complex.