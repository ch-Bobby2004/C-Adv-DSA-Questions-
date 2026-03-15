// In a sorted and rotated array, the pivot element is the element where the rotation happens.
// It is usually the largest element (or the point where the order breaks).

// Example of a sorted array:
// [1, 2, 3, 4, 5, 6, 7]

// After rotation:
// [5, 6, 7, 1, 2, 3, 4]
// Here:
// 7 is the pivot element
// The pivot is the largest element just before the smallest element (1).


#include <iostream>
using namespace std;

int findPivot(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= arr[0])
            start = mid + 1;
        else
            end = mid;
    }

    return start - 1;  // pivot index
}

int main() {
    int arr[] = {6,7,8,9,1,2,3,4,5};
    int n = 9;

    int pivotIndex = findPivot(arr, n);

    cout << "Pivot index: " << pivotIndex << endl;
    cout << "Pivot element: " << arr[pivotIndex];

    return 0;
}