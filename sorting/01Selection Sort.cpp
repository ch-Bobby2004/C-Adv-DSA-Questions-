// Selection Sort is a simple sorting algorithm where we repeatedly find the smallest element and place it at the beginning.

// Idea:

// Find the minimum element in the unsorted part.
// Swap it with the first unsorted element.
// Move the boundary of the sorted part forward.


#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;

        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // swap
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        // swap(arr[minIndex],arr[i]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    selectionSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}




// Case	Time
// Best	O(n²)
// Average	O(n²)
// Worst	O(n²)

// Swaps = O(n)