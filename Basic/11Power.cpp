#include <iostream>
using namespace std;
// calculate 2 to the power 10 using a loop
int main() {
    int base = 2;
    int exponent = 10;
    int result = 1;

    for(int i = 1; i <= exponent; i++) {
        result *= base;
    }

    cout << base << " ^ " << exponent << " = " << result << endl;

    return 0;
}