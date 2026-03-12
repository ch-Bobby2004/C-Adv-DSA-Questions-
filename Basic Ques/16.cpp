#include <iostream>
using namespace std;
//gcd

int main() {
    int a, b;
    cin >> a >> b;

    int mn = min(a, b);

    for (int i = mn; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            cout << i;
            break;
        }
    }

    return 0;
}
