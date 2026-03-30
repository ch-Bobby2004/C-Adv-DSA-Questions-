// Search in a Sorted Matrix (Efficient Method)
// ✅ Condition

// Matrix must be sorted like this:

// Each row → increasing (left → right)
// Each column → increasing (top → bottom)
// Example:
// 1   4   7
// 2   5   8
// 3   6   9
// 🔹 Best Approach (O(n + m)) 🚀
// ✅ Idea:

// Start from top-right corner

// If target == element → found
// If target < element → move left
// If target > element → move down


#include <iostream>
using namespace std;

int main() {
    // int arr[3][3] = {
    //     {1, 4, 7},
    //     {2, 5, 8},
    //     {3, 6, 9}
    // };
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target = 7;

    int i = 0, j = 2; // start from top-right
    bool found = false;

    while(i < 3 && j >= 0) {
        if(arr[i][j] == target) {
            cout << "Found at (" << i << ", " << j << ")";
            found = true;
            break;
        }
        else if(target < arr[i][j]) {
            j--; // move left
        }
        else {
            i++; // move down
        }
    }

    if(!found) {
        cout << "Element not found";
    }

    return 0;
}


// O(n + m) (very efficient)
// Much better than O(n × m)