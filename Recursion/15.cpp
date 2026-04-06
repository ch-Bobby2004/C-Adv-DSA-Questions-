#include <iostream>
using namespace std;

void generateSubsets(int arr[], int n, int subset[], int subsetSize, int index) {
    if (index == n) {
        // Print current subset
        cout << "{ ";
        for (int i = 0; i < subsetSize; i++)
            cout << subset[i] << " ";
        cout << "}" << endl;
        return;
    }

    // Include arr[index]
    subset[subsetSize] = arr[index];
    generateSubsets(arr, n, subset, subsetSize + 1, index + 1);

    // Backtrack: exclude arr[index]
    generateSubsets(arr, n, subset, subsetSize, index + 1);
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int subset[n];  // Temporary array to store subset

    generateSubsets(arr, n, subset, 0, 0);

    return 0;
}


// How It Works

// subset[] stores the current subset.

// subsetSize keeps track of how many elements are in the subset.

// At each step, you have two choices for arr[index]:

// Include it → add to subset, recurse

// Exclude it → don’t add, recurse

// Backtracking happens automatically because when recursion returns, the previous element in the array can be reused.