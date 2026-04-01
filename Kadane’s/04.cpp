#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// Print Subarray
int kadaneWithSubarray(vector<int>& arr) {
    int current_sum = arr[0], max_sum = arr[0];
    int start = 0, end = 0, temp_start = 0;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > current_sum + arr[i]) {
            current_sum = arr[i];
            temp_start = i;
        } else {
            current_sum += arr[i];
        }

        if (current_sum > max_sum) {
            max_sum = current_sum;
            start = temp_start;
            end = i;
        }
    }

    cout << "Subarray: ";
    for (int i = start; i <= end; i++)
        cout << arr[i] << " ";

    cout << endl;

    return max_sum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum subarray sum: "
         << kadaneWithSubarray(arr);

    return 0;
}

// Time: O(n) 
// Space: O(1)