// Input: Number of rows n
// Output: Each row contains number, character, *, repeated

// Example (n=5):



// 1 A * A 1
// 2 B * B 2
// 3 C * C 3
// 4 D * D 4
// 5 E * E 5


#include <iostream>
using namespace std;

int main() {
    int n =5;

    int i = 1;      // Row counter
    char ch = 'A';  // Start from 'A'

    while (i <= n) {
        cout << i << " " << ch << " * " << ch << " " << i << endl;
        i++;      // Next row
        ch++;     // Next character
    }

    return 0;
}