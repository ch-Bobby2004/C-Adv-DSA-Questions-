#include <iostream>
#include <iomanip>   // needed for setw and setfill
using namespace std;

int main() {
    int rows = 4;
    int cols = 4;

    int i = 1;
    int count = 1;

    while (i <= rows) {
        int j = 1;

        while (j <= cols) {
            cout << setw(2) << setfill('0') << count << " ";
            count++;
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
// setw(2) → sets width to 2 characters
// setfill('0') → fills empty space with 0