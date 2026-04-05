// Macros in C++ are preprocessor directives used to define constants, functions, or code snippets that the preprocessor replaces before compilation. They are part of the C++ preprocessor and are defined using #define.

// Macros are not type-safe and don’t follow the rules of C++ variables or functions—they are purely textual substitutions.

#include <iostream>
using namespace std;

#define PI 3.14159

int main() {
    double r = 5;
    double area = PI * r * r;
    cout << "Area = " << area << endl;
}
// The preprocessor replaces PI with 3.14159 before compilation.