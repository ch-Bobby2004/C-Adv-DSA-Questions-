#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    // Base case: element not found
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    // If element is found
    if (arr[mid] == target)
        return mid;

    // If target is smaller, search left half
    if (target < arr[mid])
        return binarySearch(arr, left, mid - 1, target);

    // If target is larger, search right half
    return binarySearch(arr, mid + 1, right, target);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;

}


// Array must be sorted before using Binary Search.
// Time Complexity: O(log n)
// Space Complexity (recursive): O(log n) due to call stac