#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
    int max = arr[0];

    // Find max element
    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    // Create count array
    int count[max + 1] = {0};

    // Count frequency
    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Print sorted array
    for(int i = 0; i <= max; i++) {
        while(count[i] > 0) {
            cout << i << " ";
            count[i]--;
        }
    }
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = 7;

    countingSort(arr, n);

    return 0;
}

// O(n + k)
// Space = O(k)