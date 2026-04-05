// Dynamic Memory Allocation is when memory is allocated at runtime, rather than at compile-time.

// It allows your program to request memory only when needed.
// The memory comes from the heap (not stack or static memory).
// You can allocate, use, and free it manually.
//  Why use dynamic memory?
// The size of data is unknown at compile-time.
// You want flexible memory usage during program execution.
// Examples: arrays whose size depends on user input, linked lists, trees, etc.


// Operators for Dynamic Memory
// Operator	Description
// new	Allocates memory for a variable or array
// delete	Frees memory allocated by new
// new[]	Allocates memory for an array
// delete[]	Frees memory allocated by new[]

// Advantages of Dynamic Memory
// Memory allocated only when needed
// Flexible: array size can be determined at runtime
// Can create complex data structures (linked lists, trees, graphs)
// 🔹 6. Common Mistakes
// Forgetting to delete → memory leak
// Using pointer after deleting → dangling pointer
// Accessing memory outside allocated bounds

#include <iostream>
using namespace std;

int main() {
    int* p = new int;   // allocate memory for 1 int
    *p = 42;            // assign value
    cout << *p << endl; // prints 42

    delete p;           // free memory
    p = nullptr;        // good practice
}