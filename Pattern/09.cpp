#include <iostream>
using namespace std;

int main() {
    int rows = 4;
    int cols = 4;

    int i = 1;
    while (i <= rows) {
        int j = 1;
        int val = i;
        while (j <= i) {
            cout << val++ << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
