#include <iostream>
using namespace std;

class Parent {
public:
    string name;
    int age;

    Parent(string n, int a) {
        name = n;
        age = a;
    }
};

class Child : public Parent {
public:
    int rollNo;

    // Call parent constructor here 
    Child(string n, int a, int r) : Parent(n, a) {
        rollNo = r;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age 
             << ", RollNo: " << rollNo << endl;
    }
};

int main() {
    Child c("Rahul", 20, 101);
    c.display();
}