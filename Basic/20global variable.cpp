// A global variable in C++ is a variable that is declared outside of all functions, usually at the top of a file. It is accessible by all functions in that file (or across files if declared with extern).

#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

void printGlobal() {
    cout << "Global variable: " << globalVar << endl;
}

int main() {
    cout << "Main: " << globalVar << endl;
    globalVar = 200; // can modify
    printGlobal();
}

// globalVar is accessible and modifiable from main() and printGlobal().
// Scope: entire file after its declaration.


//  Advantages of Global Variables
// Accessible anywhere in the file (or across files with extern).
// Useful for constants or values shared across multiple functions.
// Avoid passing the same variable to multiple functions repeatedly.

// Disadvantages / Risks
// Can be modified from anywhere → harder to debug.
// Reduces modularity and makes code less maintainable.
// In multi-file programs, name conflicts can occur.


// Using extern for Multi-file Programs

// If you want to access a global variable from another file: