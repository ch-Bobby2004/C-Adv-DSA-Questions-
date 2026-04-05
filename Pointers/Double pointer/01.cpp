// A double pointer in C++ is a pointer to a pointer. In other words, it stores the address of another pointer, which in turn points to a value. Double pointers are commonly used in dynamic memory allocation, arrays of pointers, and passing pointers to functions.


int x = 10;
int* p = &x;    // pointer to int
int** pp = &p;  // pointer to pointer to int
// x → normal variable
// p → pointer to x
// pp → pointer to p


#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x;
    int** pp = &p;

    cout << "Value of x: " << x << endl;       // 10
    cout << "Value via *p: " << *p << endl;    // 10
    cout << "Value via **pp: " << **pp << endl; // 10

    return 0;
}