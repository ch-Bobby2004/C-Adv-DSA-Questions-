// Function Returning a Pointer

// A function can return a pointer (memory address).

#include <iostream>
using namespace std;

int* getPointer(int *arr) {
    return arr;
}

int main() {
    int arr[3] = {1, 2, 3};
    int *ptr = getPointer(arr);

    cout << *ptr;   // Output: 1
}



// Never return pointer to local variables (they get destroyed after function ends)