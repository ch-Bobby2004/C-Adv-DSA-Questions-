// Pass by Reference
// Definition: The function receives the address of the variable (a reference), so it can modify the original variable.
// Effect: Changes inside the function affect the original variable.

#include <stdio.h>

void addOne(int *x) {
    *x = *x + 1;  // modifies the original variable via pointer
}

int main() {
    int a = 5;
    addOne(&a);     // pass the address of 'a'
    printf("%d\n", a);  // Output: 6, 'a' is modified
    return 0;
}

// Here, x is a pointer to a. Using *x, we can change the original value of a.