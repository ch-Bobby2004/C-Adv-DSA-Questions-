#include <iostream>
using namespace std;
// Intersection if array is sorted

// Two Pointer 

int main() {
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 2, 3, 5};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    int res[100]; // store intersection
    int k = 0;    // size of result

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            res[k++] = arr1[i];
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    cout << "Intersection: ";
    for (int x = 0; x < k; x++) {
        cout << res[x] << " ";
    }

    return 0;
}