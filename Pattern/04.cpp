#include <iostream>
using namespace std;

int main() {
    int rows = 4;
    int cols = 4;

    int i = 1;
    int count =1;

    while (i <= rows) {
        int j = 1;   // reset column counter

        while (j <= cols) {
            cout << count++ << " ";
            
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}