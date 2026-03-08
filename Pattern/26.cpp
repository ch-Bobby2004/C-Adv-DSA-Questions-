#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i = 1; i <= n; i++) {

        // Print spaces
        for(int space = 1; space <= n - i; space++) {
            cout << " ";
        }

        // Print increasing numbers
        for(int num = 1; num <= i; num++) {
            cout << num;
        }

        // Print decreasing numbers
        for(int num = i - 1; num >= 1; num--) {
            cout << num;
        }

        cout << endl;
    }

    return 0;
}