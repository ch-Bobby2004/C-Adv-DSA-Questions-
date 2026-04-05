// Pass by Value
// Definition: The function receives a copy of the argument.
// Effect: Changes made to the parameter inside the function do not affect the original variable.


#include <stdio.h>

void addOne(int x) {
    x = x + 1;  // only changes the copy
}

int main() {
    int a = 5;
    addOne(a);
    printf("%d\n", a);  // Output: 5, original 'a' is unchanged
    return 0;
}

// Here, x is a copy of a. Modifying x does not modify a.