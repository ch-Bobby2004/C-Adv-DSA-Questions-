// Quick Sort works by partitioning:

// Pick a pivot element from the array.
// Rearrange the array so that:
// All elements smaller than pivot go to the left
// All elements greater than pivot go to the right
// Recursively apply Quick Sort to left and right subarrays.

// Case	Complexity
// Best	O(n log n)
// Average	O(n log n)
// Worst	O(n²)

// Space Complexity
// In-place → O(log n) recursive stack (best case)
// Worst case → O(n) stack (completely unbalanced)

#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition function using Lomuto scheme
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // choose last element as pivot
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1; // pivot index
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // get pivot index

        // Recursively sort left and right subarrays
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Utility function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array:   ";
    printArray(arr, n);

    return 0;
}