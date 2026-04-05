#include <iostream>
using namespace std;

// Pointer arithmetic in C++ refers to performing arithmetic operations (like addition or subtraction) on pointers. Since pointers store memory addresses, these operations move the pointer to different memory locations based on the data type size.
int main() {
    // Pointer Arithmetic
    
    int arr[3] = {10, 20, 30};
    int* p = arr;
    
    cout << *p << endl;     // 10
    cout << *(p + 1) << endl; // 20
    
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    
    ptr++;  // moves to next integer

//  Here, ptr++ moves forward by sizeof(int) bytes (usually 4 bytes), not just 1 byte.

    return 0;
}







