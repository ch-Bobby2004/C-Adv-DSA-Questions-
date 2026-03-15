// o search an element in a sorted and rotated array, we usually use binary search for O(log n) time.

// The idea:
// Find the pivot (smallest element).
// Decide which half to search.
// Apply binary search on that half.


#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int key) {
    while(s <= e) {
        int mid = s + (e - s) / 2;

        if(arr[mid] == key)
            return mid;

        if(arr[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}

int findPivot(int arr[], int n) {
    int s = 0, e = n - 1;

    while(s < e) {
        int mid = s + (e - s) / 2;

        if(arr[mid] >= arr[0])
            s = mid + 1;
        else
            e = mid;
    }

    return s;
}

int search(int arr[], int n, int key) {

    int pivot = findPivot(arr, n);

    if(key >= arr[pivot] && key <= arr[n-1])
        return binarySearch(arr, pivot, n-1, key);
    else
        return binarySearch(arr, 0, pivot-1, key);
}

int main() {
    int arr[] = {6,7,8,9,1,2,3,4};
    int n = 8;
    int key = 2;

    int index = search(arr, n, key);

    cout << "Element found at index: " << index;
}