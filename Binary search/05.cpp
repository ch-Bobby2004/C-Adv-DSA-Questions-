// Find the largest mountain subarray (maximum length) in an array.
// A mountain subarray must have:
// Strictly increasing
// Then strictly decreasing
// Minimum length ≥ 3

// Example
// Array:
// [2,1,4,7,3,2,5]
// Mountains:
// [1,4,7,3,2] → length 5 ✅

// [2,5] → not valid (no decrease)

// Largest mountain length = 5




// Approach (Linear Scan) — O(n)
// Steps:
// Start from index 1.
// Check if arr[i] is a peak:
// arr[i] > arr[i-1]
// arr[i] > arr[i+1]
// Expand left while increasing.
// Expand right while decreasing.
// Calculate length.

#include <iostream>
using namespace std;

int largestMountain(int arr[], int n) {
    int maxLen = 0;

    for(int i = 1; i < n-1; i++) {

        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) { // peak

            int left = i;
            int right = i;

            while(left > 0 && arr[left] > arr[left-1])
                left--;

            while(right < n-1 && arr[right] > arr[right+1])
                right++;

            int len = right - left + 1;
            maxLen = max(maxLen, len);
        }
    }

    return maxLen;
}

int main() {
    int arr[] = {2,1,4,7,3,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Largest mountain length: " << largestMountain(arr,n);

    return 0;
}