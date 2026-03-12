// riplets in an array whose sum equals a target value.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 9;

    cout << "Triplets with sum " << target << ": ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == target) {
                    cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ") ";
                }
            }
        }
    }

    return 0;
}

// Time Complexity: O(n³)
// Space Complexity: O(1)
