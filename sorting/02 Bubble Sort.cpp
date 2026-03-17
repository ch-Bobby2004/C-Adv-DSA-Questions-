// Bubble Sort is a simple sorting algorithm that repeatedly steps through a list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted.

// How it works

// Start from the first element.
// Compare it with the next element.
// Swap them if the first is greater than the second.
// Move to the next pair and repeat.
// After one full pass, the largest element “bubbles up” to the end.
// Repeat the process for the remaining elements.
// Example
// Sort: [5, 3, 8, 4]

// Pass 1:
// Compare 5 & 3 → swap → [3, 5, 8, 4]
// Compare 5 & 8 → no swap → [3, 5, 8, 4]
// Compare 8 & 4 → swap → [3, 5, 4, 8]

// Pass 2:
// Compare 3 & 5 → no swap
// Compare 5 & 4 → swap → [3, 4, 5, 8]

// Pass 3:

// Already sorted → stop




#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        // If no swaps happened, array is already sorted
        if (!swapped)
            break;
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

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}



// Case	Time Complexity
// Best	O(n)
// Average	O(n²)
// Worst	O(n²)
// Space	O(1)