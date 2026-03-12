// pairs in an array whose sum equals a target value
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;

    cout << "Pairs with sum " << target << ": ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << "," << arr[j] << ") ";
            }
        }
    }
    return 0;
}

// Time Complexity: O(n²)
// Space Complexity: O(1)