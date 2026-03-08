// Take an unsigned integer and print the number of 1 bits in its binary representation.
// This is also called:  Hamming Weight
// n = 11

// Binary of 11:

// 1011

// Number of 1 bits = 3

// Basic Approach (Divide by 2)
// Fastest (Brian Kernighan’s Algorithm)
#include <iostream>
using namespace std;

int main() {
    unsigned int n = 11;   // directly assigned value

    int count = 0;

    while(n) {
        n = n & (n - 1);   // remove last set bit
        count++;
    }

    cout << "Number of 1 bits: " << count;

    return 0;
}