//  Passing Pointer to a Function

// Instead of passing values, you pass the address of variables. This allows the function to modify original data.


#include <iostream>
using namespace std;

void modify(int *ptr) {
    // *ptr = *ptr + 10;
    (*ptr)++;
    (*ptr)++;
    (*ptr)++;
}

int main() {
    int x = 5;
    modify(&x);
    cout << x;   // Output: 15
}

//  &x → address of x
//  *ptr → value at that address

// Changes affect the original variable
// Also called Call by Address