#include <iostream>
#include <algorithm>
using namespace std;

int countPairs(int arr[], int n, int k) {
    sort(arr, arr + n);

    int i = 0, j = 1;
    int count = 0;

    while (j < n) {
        int diff = arr[j] - arr[i];

        if (diff < k) {
            j++;
        }
        else if (diff > k) {
            i++;
            if (i == j) j++;
        }
        else { // diff == k
            int val1 = arr[i];
            int val2 = arr[j];

            int c1 = 0, c2 = 0;

            while (i < n && arr[i] == val1) {
                c1++;
                i++;
            }

            while (j < n && arr[j] == val2) {
                c2++;
                j++;
            }

            count += c1 * c2;
        }
    }

    return count;
}

int main() {
    int arr[] = {1, 4, 1, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << countPairs(arr, n, k);
    return 0;
}