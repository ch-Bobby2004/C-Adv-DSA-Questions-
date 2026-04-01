#include <iostream>
#include <vector>
using namespace std;
// brute force approach for dividing an array into 2 subarrays with equal sum

int equalSplitBrute(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int left_sum = 0;
        int right_sum = 0;

        // compute left sum
        for (int j = 0; j <= i; j++) {
            left_sum += arr[j];
        }

        // compute right sum
        for (int j = i + 1; j < n; j++) {
            right_sum += arr[j];
        }

        if (left_sum == right_sum) {
            return i; // split index
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 3};

    int idx = equalSplitBrute(arr);

    if (idx != -1) {
        cout << "Split at index: " << idx << endl;

        cout << "Left: ";
        for (int i = 0; i <= idx; i++)
            cout << arr[i] << " ";

        cout << "\nRight: ";
        for (int i = idx + 1; i < arr.size(); i++)
            cout << arr[i] << " ";
    } else {
        cout << "No equal split possible";
    }

    return 0;
}


// Time: O(n²) (nested loops)
// Space: O(1)