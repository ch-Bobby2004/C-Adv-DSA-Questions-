// Optimized Idea (Running Sum)

// Instead of calculating left and right sums every time:

// Compute total sum once
// Keep a running left sum
// Right sum = total - left_sum


#include <iostream>
#include <vector>
using namespace std;

int equalSplitOptimized(vector<int>& arr) {
    int total = 0;

    // Step 1: total sum
    for (int x : arr)
        total += x;

    int left_sum = 0;

    // Step 2: traverse and check
    for (int i = 0; i < arr.size() - 1; i++) {
        left_sum += arr[i];
        int right_sum = total - left_sum;

        if (left_sum == right_sum) {
            return i; // split index
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 2,3, 3, 3};

    int idx = equalSplitOptimized(arr);

    if (idx != -1) {
        cout << "Split at index: " << idx << endl;
    } else {
        cout << "No equal split possible";
    }

    return 0;
}

// Approach	Time Complexity	Space
// Brute Force	O(n²)	O(1)
// Optimized	O(n)	O(1)