#include <iostream>
using namespace std;

class Test {
public:
    int *p;

    Test(int val) {
        p = new int(val);
    }

    ~Test() {
        delete p;
        cout << "Memory freed" << endl;
    }

    void display() {
        cout << *p << endl;
    }
};

int main() {
    Test t1(10);
    t1.display();
}  // destructor called → memory freed