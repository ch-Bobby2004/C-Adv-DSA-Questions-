// Binary Search
#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key) {
    if (left > right)
        return -1;  // Element not found

    int mid = left + (right - left) / 2;

    if (arr[mid] == key)
        return mid;

    else if (key < arr[mid])
        return binarySearch(arr, left, mid - 1, key);

    else
        return binarySearch(arr, mid + 1, right, key);
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key =5;



    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}


// if key is 38
// mid=left+(right−left)/2=0+(7−0)/2=3
// mid=4+(7−4)/2 =4+ 3/2 =4+1=5

// Time Complexity	O(log n)
// Space Complexity	O(log n) (due to recursion stack)



// Why Not (left + right) / 2?
// int left = 2'000'000'000;
// int right = 2'000'000'001;
// int mid = (left + right) / 2; // 4,000,000,001 / 2 → OVERFLOW!


// Why left + (right - left)/2 is Safe

// left = 2'000'000'000
// right = 2'000'000'001

// mid = left + (right - left)/2
//     = 2'000'000'000 + (1)/2
//     = 2'000'000'000