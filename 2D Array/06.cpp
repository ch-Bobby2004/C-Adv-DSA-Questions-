// Row-wise Sum in 2D Array

#include <iostream>
using namespace std;

// Function to calculate row-wise sum
// atleast pass number of column
// Number of columns = 3 (fixed)
// Number of rows = not specified (can vary)
void rowSum(int arr[][3], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        int sum = 0;

        for(int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }

        cout << "Sum of row " << i << " = " << sum << endl;
    }
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rowSum(arr, 3, 3);

    return 0;
}