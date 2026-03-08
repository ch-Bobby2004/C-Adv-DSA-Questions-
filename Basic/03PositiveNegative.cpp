#include <iostream>
using namespace std;
// check whether a number is positive, negative, or zero
void checkNumber(int num) {
    if (num > 0)
        cout << "Positive number";
    else if (num < 0)
        cout << "Negative number";
    else
        cout << "Zero";
}

int main() {
    int num = 0;   
    checkNumber(num);

    return 0;
}