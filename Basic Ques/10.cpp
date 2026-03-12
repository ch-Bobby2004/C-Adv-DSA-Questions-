// program to print all divisors of a given positive number between 1 and 100


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int last = min(n,100);

    cout << "Divisors of " << n << " between 1 and 100 are:\n";

    for (int i = 1; i <= last; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
