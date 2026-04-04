#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {10, 30, 20, 5};
    int n = 4;
    int target = 25;

    if(n < 2) {
        cout << "No valid pair";
        return 0;
    }

    // Step 1: Sort array
    sort(arr, arr + n);

    int left = 0;
    int right = n - 1;

    int minDiff = INT_MAX;
    int maxAbsDiff = -1;

    int ans1 = 0, ans2 = 0;

    // Step 2: Two pointer approach
    while(left < right) {

        int sum = arr[left] + arr[right];
        int diff = abs(target - sum);
        // int absDiff = abs(arr[left] - arr[right]);

        if(diff < minDiff ) {
        // if(diff < minDiff || 
        //    (diff == minDiff && absDiff > maxAbsDiff)) {

            minDiff = diff;
            // maxAbsDiff = absDiff;

            ans1 = arr[left];
            ans2 = arr[right];
        }

        // Move pointers
        if(sum < target)
            left++;
        else if(sum > target)
            right--;
        else
           break;   //because we already start with extrem ends
    }

    cout << ans1 << " " << ans2;

    return 0;
}



// Sorting → O(n log n)

// Two pointer scan → O(n)

// Total → O(n log n)