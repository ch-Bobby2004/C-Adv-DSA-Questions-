// Kadane’s Algorithm is used to find the maximum subarray sum in a 1D array (i.e., the largest sum of a contiguous subarray).

//  Idea
// At each element, decide:

// Start a new subarray from current element, OR
// Continue the previous subarray



// O(n³) → pure brute force
// O(n²) → optimized brute force
// O(n) → Kadane’s Algorithm (best)

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kadane(vector<int>& arr) {
    int current_sum = arr[0];
    int max_sum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        current_sum = max(arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum subarray sum: "
         << kadane(arr);

    return 0;
}

// Time: O(n) 
// Space: O(1)




