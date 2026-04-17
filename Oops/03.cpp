#include <iostream>
using namespace std;

class Student {
public:
    string name;

    void setName(string name) {
        this->name = name;  // 'this' refers to current object
    }

    void display() {
        cout << this->name << endl;
    }
};

int main() {
    Student s1("Bob");
    s1.display();
    // default Copy constructor
    Student s2(s1);
    s2.display();
}
