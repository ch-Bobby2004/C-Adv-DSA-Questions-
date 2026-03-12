

    // Give an integer check if it represents a valid binary representaion or not
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int temp = n;
    bool isBinary = true;

    if (n == 0) {
        isBinary = true;
    } else {
        while (n != 0) {
            int digit = n % 10;
            if (digit != 0 && digit != 1) {
                isBinary = false;
                break;
            }
            n = n / 10;
        }
    }

    if (isBinary)
        cout << temp << " is a valid binary number";
    else
        cout << temp << " is NOT a valid binary number";

    return 0;
}

// 10101 % 10 = 1  → valid
// 1010 % 10 = 0   → valid
// 101 % 10 = 1    → valid
// 10 % 10 = 0     → valid
// 1 % 10 = 1      → valid

// All digits are 0 or 1 → binary number



// 10201 % 10 = 1
// 1020 % 10 = 0
// 102 % 10 = 2  ← not 0 or 1


