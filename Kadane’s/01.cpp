// find the maximum subarray sum

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubarrayBrute(vector<int>& arr) {
    int n = arr.size();
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            int sum = 0;

            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }

            max_sum = max(max_sum, sum);
        }
    }

    return max_sum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum subarray sum: "
         << maxSubarrayBrute(arr);

    return 0;
}

// Time: O(n³)  (3 nested loops)
// Space: O(1)