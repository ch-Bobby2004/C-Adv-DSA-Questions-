#include <iostream>
using namespace std;
// Abstraction using class
class Car {
public:
    void start() {
        cout << "Car started\n";
    }
};

int main() {
    Car c;
    c.start();  // user doesn't see internal logic
}