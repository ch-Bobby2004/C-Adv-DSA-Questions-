#include <iostream>
using namespace std;

int main() {
    // Changing Value Using Pointer
    int x = 10;
    int* p = &x;
    
    *p = 20; // modifies x
    cout << x; // prints 20
    
    
    // Pointer Types
    //  Null Pointer
    int* p = NULL;
    // or
    int* p = nullptr; // modern C++
    
    //  Void Pointer
    // Can hold address of any type:
    
    void* p;
    int x = 5;
    p = &x;
   
    return 0;
}



