// Pointers in C++ are variables that store the memory address of another variable. They’re a fundamental concept used for efficient memory handling, dynamic allocation, and working with arrays or functions.


// A pointer is declared using the * symbol.

// int x = 10;
// int* p = &x;
// x → normal variable
// &x → address of x
// p → pointer storing the address of x


#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int* p = &x;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer p stores: " << p << endl;
    cout << "Value at address (using *p): " << *p << endl;

    return 0;
}


// . Dereferencing

// Using * on a pointer gives the value stored at that address.

// int x = 10;
// int* p = &x;

// cout << *p; // prints 10