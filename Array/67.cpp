// // sum of all subarray
// given an integer array arr[] compute the sum of all possible sub-array of the array.a sub-array is contingous part of sub aray

// input arr[1,5,4]
// output 1 ,4,5,  1,5,  1,4,5  5,4


// 1 Burate force code


#include <bits/stdc++.h>
using namespace std;



int main() {
    int arr[] = {1,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int totalSum = 0;

    // loop over start index
    for(int i = 0; i < n; i++) {
        int subarraySum = 0;

        // loop over end index
        for(int j = i; j < n; j++) {
            subarraySum += arr[j];  // sum of subarray arr[i..j]
            totalSum += subarraySum; // add to total sum
        }
    }

    cout << "Sum of all subarrays = " << totalSum << endl;

    return 0;
}


// Tc O(n^2)
