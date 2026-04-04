#include <iostream>
using namespace std;

int longestMountain(int arr[], int n) {

    if (n < 3) return 0;

    int maxLen = 0;
    int up = 0, down = 0;

    for (int i = 1; i < n; i++) {

        // Reset if:
        // 1) Plateau found
        // 2) New increasing sequence after a decreasing one
        if ((down > 0 && arr[i] > arr[i - 1]) || arr[i] == arr[i - 1]) {
            up = 0;
            down = 0;
        }

        if (arr[i] > arr[i - 1]) {
            up++;
        }
        else if (arr[i] < arr[i - 1]) {
            down++;
        }

        // Valid mountain exists
        if (up > 0 && down > 0) {
            maxLen = max(maxLen, up + down + 1);
        }
    }

    return maxLen;
}

int main() {

    int arr[] = {4,3,5,7,9,6,3,2,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Longest Mountain Length = "<< longestMountain(arr, n);

    return 0;
}



// O(N)