// riplets in an array whose sum equals a target value.#include <iostream>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 9;

    sort(arr, arr + n); // ensure sorted

    cout << "Triplets with sum " << target << ": ";
    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == target) {
                cout << "(" << arr[i] << "," << arr[left] << "," << arr[right] << ") ";
                left++;
                right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return 0;
}


// Time: O(n²) → outer loop + two-pointer scan
// Space: O(1) → no extra array needed