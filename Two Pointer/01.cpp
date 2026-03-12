// pairs in an array whose sum equals a target value
// Two Pointer

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // sorted array
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;

    int i = 0, j = n - 1;

    cout << "Pairs with sum " << target << ": ";
    while (i < j) {
        int sum = arr[i] + arr[j];
        if (sum == target) {
            cout << "(" << arr[i] << "," << arr[j] << ") ";
            i++;
            j--;
        } else if (sum < target) {
            i++;
        } else {
            j--;
        }
    }

    return 0;
}


// ime Complexity: O(n)
// Space Complexity: O(1)