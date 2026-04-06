// check if an array is sorted
#include <iostream>
using namespace std;

bool isSortedRecursive(int arr[], int n) {
    // Base case: 0 or 1 element → already sorted
    if(n == 0 || n == 1)
        return true;

    // Check last two elements + recursive check
    if(arr[n-2] > arr[n-1])
        return false;

    return isSortedRecursive(arr, n-1);
}

int main() {
    int arr[] = {1, 2, 5, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    if(isSortedRecursive(arr, n))
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n) → because of recursion stack