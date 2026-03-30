#include <iostream>
using namespace std;

int main() {
    
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

// column wise
    int rows = 2, cols = 3;

    for(int j = 0; j < cols; j++) {      // column loop
        for(int i = 0; i < rows; i++) {  // row loop
            cout << arr[i][j] << " ";
        }
    }

    return 0;
}