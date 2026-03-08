// print a rectangle using a while loop
#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int cols = 4;

    int i = 0;

    while (i < rows) {
        int j = 0;   // reset column counter

        while (j < cols) {
            cout << "* ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}