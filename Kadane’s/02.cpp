#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxSubarrayBetter(vector<int>& arr) {
    int n = arr.size();
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += arr[j];   // reuse previous sum
            max_sum = max(max_sum, sum);
        }
    }

    return max_sum;
}
int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum subarray sum: "
         << maxSubarrayBetter(arr);

    return 0;
}


// Time: O(n²) 
// Space: O(1)