// Merge Sort is a Divide and Conquer algorithm that:

// Divides the array into halves
// Sorts each half recursively
// Merges the sorted halves
#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int i = left, j = mid + 1;
    int temp[100];  // temporary array
    int k = left;

    // Merge two sorted halves
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    // Copy remaining elements
    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    // Copy back to original array
    for (int x = left; x <= right; x++)
        arr[x] = temp[x];
}

void mergeSort(int arr[], int left, int right) {
    // Base case
    if (left >= right)
        return;

    int mid = (left + right) / 2;

    // Divide
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Combine
    merge(arr, left, mid, right);
}

int main() {
    int arr[] = {8, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

// Case	Time Complexity
// Best	O(n log n)
// Average	O(n log n)
// Worst	O(n log n)
// Space
// O(n)

#include <iostream>
using namespace std;

// Merge function using dynamic arrays
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create dynamic arrays
    int* L = new int[n1];
    int* R = new int[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    // Merge the arrays back into arr[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    // Copy remaining elements, if any
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    // Free dynamically allocated memory
    delete[] L;
    delete[] R;
}

// Merge Sort function
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);       // sort left half
        mergeSort(arr, mid + 1, right);  // sort right half
        merge(arr, left, mid, right);    // merge both halves
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
    int arr[] = {12, 7, 14, 9, 10, 5, 3, 8, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array:   ";
    printArray(arr, n);

    return 0;
}