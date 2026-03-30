#include <iostream>
using namespace std;
// search an element in a 2D array (matrix)

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target = 3;

    bool found = false;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] == target) {
                cout << "Element found at position: (" << i << ", " << j << ")";
                found = true;
                break;
            }
        }
        if(found) break;
    }

    if(!found) {
        cout << "Element not found";
    }

    return 0;
}