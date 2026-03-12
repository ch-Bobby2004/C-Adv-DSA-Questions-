// A Peak Index in a Mountain Array is the index of the element that is greater than its neighbors in an array that first strictly increases and then strictly decreases.

// Example (Mountain Array):
// [1, 3, 5, 7, 6, 4, 2]

// Here:

// Increasing → 1 3 5 7

// Decreasing → 7 6 4 2

// Peak element = 7
// Peak index = 3

#include <iostream>
using namespace std;

int peakIndex(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while(start < end) {
        int mid = (start + end) / 2;

        if(arr[mid] < arr[mid + 1])
            start = mid + 1;   // move right
        else
            end = mid;         // move left
    }

    return start;
}

int main() {
    int arr[] = {1,3,5,7,6,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Peak index: " << peakIndex(arr,n);
}


// Time Complexity
// O(log n)
// Space Complexity
// O(1)