/*

Maximum sum of a subarray of size k

Given an array of integers arr[] and an integer k, find the maximum possible sum among all contiguous subarrays of size exactly k.
A subarray is a sequence of consecutive elements from the original array. Return the maximum sum that can be obtained from any such subarray of length k.

Examples: 

Input  : arr[] = [100, 200, 300, 400],  k = 2
Output : 700
Explanation: We get maximum sum by adding subarray [300,400] of size 2

Input  : arr[] = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4 
Output : 39
Explanation: We get maximum sum by adding subarray [4, 2, 10, 23] of size 4.

Input  : arr[] = [2, 3], k = 1
Output : 3
Explanation: The subarrays of size 1 are [2] and [3]. The maximum sum is 3.

Input: [250, 250, 10, 10, 300]  k = 2
output: 500


1-Brute Force: TC: O(n*k)

*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {-100, 200, -300, 400};
    // psum = [-100, 100, -200, 200]
    // 200 - (-100) = 300
    
    int n = sizeof(a) / sizeof(a[0]);
    int k = 3;
    int maxSum = INT_MIN;
    
    if(k > n){
        return 0;
    }
    
    for(int i = 0; i <= n - k; i++){
        int currSum = 0;
        
        for(int j = 0; j < k; j++){
            currSum += a[i + j];
        }

        if(currSum > maxSum){
            maxSum = currSum;
        }
    }
    cout << maxSum;

    return 0;
}