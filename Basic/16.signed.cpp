#include <iostream>
using namespace std;

int main() {
    signed int a = -10;   // can be negative
    int b = 20;           // default is signed
    cout << a << " " << b << endl;
    return 0;
}



int main() {
    unsigned int x = 100;   // can only be 0 or positive
    // x = -10;   // ERROR! cannot store negative values
    cout << x << endl;
    return 0;
}