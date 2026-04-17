#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle starts\n";
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Car drives\n";
    }
};

int main() {
    Car c;
    c.start();  // inherited
    c.drive();  // own function
}



// Example with protected

class Parent {
protected:
    int x = 10;
};

class Child : public Parent {
public:
    void show() {
        cout << x;  // accessible
    }
};


// Constructor & Inheritance

class Base {
public:
    Base() {
        cout << "Base constructor\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor\n";
    }
};