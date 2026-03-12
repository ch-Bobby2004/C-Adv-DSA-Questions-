#include <iostream>
using namespace std;

int main() {
// Swap using extra variable
    int a = 5, b = 10;
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << ", b = " << b;


//    without extra variable
  int a = 5, b = 10;
    int temp;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << ", b = " << b;

    return 0;
}
