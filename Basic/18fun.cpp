#include <iostream>
using namespace std;

// Function to calculate a^b
int power(int a, int b) {
    int result = 1;
    for(int i = 1; i <= b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;

    cout << a << " raised to " << b << " is " << power(a, b) << endl;

    return 0;
}