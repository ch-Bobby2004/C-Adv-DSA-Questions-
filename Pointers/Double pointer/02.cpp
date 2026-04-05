#include <stdio.h>

void changePointer(int **ptr) {
    static int b = 20;  // keep it in memory after function ends
    *ptr = &b;          // change the original pointer to point to b
}

int main() {
    int a = 10;
    int *p = &a;

    printf("Before: *p = %d\n", *p);  // Output: 10

    changePointer(&p);                // Pass the address of pointer p

    printf("After: *p = %d\n", *p);   // Output: 20
    return 0;
}