// Largest Column Sum in 2D Array

#include <iostream>
using namespace std;
#include <climits>
void largestColumnSum(int arr[][3], int rows, int cols) {
    int maxSum = INT_MIN;
    int colIndex = -1;

    for(int j = 0; j < cols; j++) {
        int sum = 0;

        for(int i = 0; i < rows; i++) {
            sum += arr[i][j];
        }

        if(sum > maxSum) {
            maxSum = sum;
            colIndex = j;
        }
    }

    cout << "Largest Column Sum = " << maxSum << endl;
    cout << "Column Index = " << colIndex << endl;
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    largestColumnSum(arr, 3, 3);

    return 0;
}