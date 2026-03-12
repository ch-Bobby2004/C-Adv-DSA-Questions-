// If an array contains duplicate elements, you can find the leftmost (first occurrence) and rightmost (last occurrence)
#include <iostream>
using namespace std;

int findLeft(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int ans = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            ans = mid;
            right = mid - 1;   // move left
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return ans;
}

int findRight(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int ans = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            ans = mid;
            left = mid + 1;   // move right
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int leftIndex = findLeft(arr, n, target);
    int rightIndex = findRight(arr, n, target);

    cout << "Leftmost index: " << leftIndex << endl;
    cout << "Rightmost index: " << rightIndex << endl;

    return 0;
}


// O(log n) (binary search)

// Space Complexity

// O(1)


// When element found → continue search left to get first index
// When element found → continue search right to get last index