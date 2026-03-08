// Take an unsigned integer and print the number of 1 bits in its binary representation.
// This is also called:  Hamming Weight
// n = 11

// Binary of 11:

// 1011

// Number of 1 bits = 3

// Basic Approach (Divide by 2)

#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    cout << "Enter number: ";
    cin >> n;

    int count = 0;

    while(n > 0) {
        if(n % 2 == 1)
            count++;

        n = n / 2;
    }

    cout << "Number of 1 bits: " << count;

    return 0;
}