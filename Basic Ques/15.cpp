#include <iostream>
using namespace std;

int main() {
    //GCD
    int a, b;
    cin >> a >> b;

    int gcd = 1;

    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    cout << gcd;

    //   int lcm = (a * b) / gcd;

    // cout << lcm;
    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;


// int main() {
//     //GCD
//     int a, b;
//     cin >> a >> b;

//     int gcd = 1;
//     int mini = min(a,b);

//     for (int i = 1; i < mini; i++) {
//         if (a % i == 0 && b % i == 0) {
//             gcd = i;
//         }
//     }

//     cout << gcd;


//     return 0;
// }
