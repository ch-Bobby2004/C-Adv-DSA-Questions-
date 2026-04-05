// Static Memory in C

// Definition:
// Static memory is memory that is allocated at compile-time and exists for the entire lifetime of the program. This is different from automatic (stack) memory or dynamic (heap) memory.

// Where static memory comes from

// Global variables

// int g = 10;  // global, stored in static memory
// g exists for the entire program.
// Accessible anywhere in the file (or other files if extern is used).

// Static local variables
#include <iostream>
using namespace std;

void func() {
    static int x = 5; // stored in static memory
    x++;
    printf("%d\n", x);
}

int main() {
    func(); // prints 6
    func(); // prints 7
    return 0;
}
// x is local in scope but lives for the entire program, retaining its value between function calls.