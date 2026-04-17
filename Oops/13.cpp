// 2. Runtime (Dynamic Polymorphism)

// Decided at runtime using inheritance + virtual

//  Function Overriding
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class\n";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class\n";
    }
};

int main() {
    Base* ptr;
    Derived d;

    ptr = &d;
    ptr->show();   // calls Derived version (runtime decision)
}