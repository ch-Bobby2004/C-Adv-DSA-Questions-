#include <iostream>
using namespace std;
// find Intersection 
int main() {
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 2, 3, 5};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int res[100]; // store intersection 
    int k = 0;    // result size

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                res[k++] = arr1[i]; // add to result
                arr2[j] = -1;       // mark used element
                break;
            }
        }
    }

    cout << "Intersection: ";
    for (int i = 0; i < k; i++) {
        cout << res[i] << " ";
    }

    return 0;
}