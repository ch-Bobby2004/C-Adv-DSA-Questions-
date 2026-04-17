// Problem with shallow copy (why deep copy is needed)

// By default, C++ uses shallow copy:

// Copies values as-is
// For pointers → copies the address, not the actual data

// This leads to both objects pointing to the same memory (danger )

// Example of problem (shallow copy)
class Test {
public:
    int *p;

    Test(int val) {
        p = new int(val);
    }
};

int main() {
    Test t1(10);
    Test t2 = t1;  // shallow copy

    *t2.p = 20;

    cout << *t1.p;  // also becomes 20 😱
}

//  Both t1 and t2 share the same memory.

//  Deep copy (solution )

// We manually create a new memory block and copy the value.

#include <iostream>
using namespace std;

class Test {
public:
    int *p;

    // Constructor
    Test(int val) {
        p = new int(val);
    }

    // Deep Copy Constructor
    Test(const Test &t) {
        p = new int;      // new memory
        *p = *(t.p);      // copy value
    }

    void display() {
        cout << *p << endl;
    }
};

int main() {
    Test t1(10);
    Test t2 = t1;  // deep copy

    *t2.p = 20;

    t1.display();  // 10 ✅
    t2.display();  // 20 ✅
}