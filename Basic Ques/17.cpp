#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int lcm = max(a, b);

    while (true) {
        if (lcm % a == 0 && lcm % b == 0) {
            cout << lcm;
            break;
        }
        lcm++;
    }

    return 0;
}
