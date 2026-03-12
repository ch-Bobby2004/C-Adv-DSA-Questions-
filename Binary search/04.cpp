// If the array is not sorted, but it contains a mountain subarray, you can still find a peak element (an element greater than its neighbors).

// Method 1: Linear Search (Simple) — O(n)
#include <iostream>
using namespace std;

int findPeak(int arr[], int n) {
    for(int i = 1; i < n-1; i++) {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2,4,7,9,6,3,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int peak = findPeak(arr,n);

    if(peak != -1)
        cout << "Peak index: " << peak << " Peak value: " << arr[peak];
    else
        cout << "No peak found";

    return 0;
}



// Method 2: Binary Search (Advanced) — O(log n)

// Even if the array is not globally sorted, a peak element can still be found using binary search.

#include <iostream>
using namespace std;

int findPeak(int arr[], int n) {
    int start = 0, end = n - 1;

    while(start < end) {
        int mid = (start + end) / 2;

        if(arr[mid] < arr[mid+1])
            start = mid + 1;
        else
            end = mid;
    }

    return start;
}