

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 0, 1, 0, 1, 0, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int low = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            swap(arr[i], arr[low]);
            low++;
        }
    }

    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)