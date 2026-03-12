#include <bits/stdc++.h>
using namespace std;

int main() {
    // factorial program
    int n;
    cin >> n;

    int fac = 1;

    if (n == 0) {
        fac = 1;
        cout << fac;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        fac *= i;
    }

    cout << fac;
    return 0;
}





// given a number n, print the multiplication table of it till its first 10 elements

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= 10; i++) {
//         cout << n << " x " << i << " = " << n * i << endl;
//     }

//     return 0;
// }

