#include <iostream>
using namespace std;

class Student {
public:
    static int count;  // shared among all objects
};

int Student::count = 0;

int main() {
    Student s1, s2;
    Student::count++;

    cout << Student::count << endl;  // 1
}