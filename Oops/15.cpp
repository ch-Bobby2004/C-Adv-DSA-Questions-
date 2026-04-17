#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void draw() = 0;  // pure virtual
};

// Derived class
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle\n";
    }
};

// Another derived class
class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle\n";
    }
};

int main() {
    Shape* s;

    Circle c;
    Rectangle r;

    s = &c;
    s->draw();   // Circle version

    s = &r;
    s->draw();   // Rectangle version
}