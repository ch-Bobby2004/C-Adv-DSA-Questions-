#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int index, int target) {
    // Base case: reached end of array
    if (index >= n)
        return -1;

    // If element is found
    if (arr[index] == target)
        return index;

    // Recursive call: check next index
    return linearSearch(arr, n, index + 1, target);
}

int main() {
    int arr[] = {3, 7, 1, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int result = linearSearch(arr, n, 0, target);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}