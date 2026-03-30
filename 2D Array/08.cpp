// Wave Print in 2D Array (C++)
// 🔹 What is Wave Print?

// 👉 Print matrix column-wise in a wave pattern:

// First column → top to bottom ⬇️
// Second column → bottom to top ⬆️
// Third column → top to bottom ⬇️
// …and so on
// 🔹 Example Matrix
// 1 2 3
// 4 5 6
// 7 8 9
// ✅ Wave Output:
// 1 4 7 8 5 2 3 6 9


#include <iostream>
using namespace std;

void wavePrint(int arr[][3], int rows, int cols) {
    for(int j = 0; j < cols; j++) {

        // Even column → top to bottom
        if(j % 2 == 0) {
            for(int i = 0; i < rows; i++) {
                cout << arr[i][j] << " ";
            }
        }
        // Odd column → bottom to top
        else {
            for(int i = rows - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    wavePrint(arr, 3, 3);

    return 0;
}


// Time Complexity
// 𝑂(𝑛×𝑚)

// n = number of rows
// m = number of columns

//  This is optimal, since every element is printed exactly once.

//  Space Complexity
// Only using constant extra space (loop variables)
// So space complexity = O(1)