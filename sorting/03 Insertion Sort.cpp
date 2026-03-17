// Insertion Sort
// Insertion Sort is a simple sorting algorithm that builds the final sorted array one element at a time—similar to how you sort playing cards in your hand.

// How it works
// Start from the second element (index 1).
// Compare it with the previous elements.
// Shift all larger elements one position to the right.
// Insert the current element in its correct position.
// Repeat for all elements.

// Example

// Sort: [5, 3, 8, 4]

// Step 1: [5 | 3, 8, 4] → insert 3 → [3, 5, 8, 4]

// Step 2: [3, 5 | 8, 4] → 8 already in place

// Step 3: [3, 5, 8 | 4] → insert 4 → [3, 4, 5, 8]


#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {5, 3, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}



// Time Complexity

// Best Case: O(n) → already sorted

// Average Case: O(n²)

// Worst Case: O(n²) → reverse order