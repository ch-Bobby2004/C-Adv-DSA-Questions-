// [5, 6, 7, 8, 1, 2, 3, 4]

// Here:

// 1 is the pivot element

// Pivot index = 4

// Because 1 is the smallest element and the array restarts from there

#include <iostream>
using namespace std;

int findPivot(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[end])
            start = mid + 1;
        else
            end = mid;
    }

    return start;   // index of smallest element
}

int main() {
    int arr[] = {5,6,7,8,1,2,3,4};
    int n = 8;

    int pivot = findPivot(arr, n);

    cout << "Pivot index: " << pivot << endl;
    cout << "Pivot element: " << arr[pivot];

    return 0;
}