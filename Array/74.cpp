/*

Count pairs with absolute difference equal to k

Given an array arr[] and a positive integer k, the task is to count all pairs (i, j) such that i < j and absolute value of (arr[i] - arr[j]) is equal to k. 

Examples: 

Input: arr[] = [1, 4, 1, 4, 5], k = 3
Output: 4
Explanation: There are 4 pairs with absolute difference 3, 
the pairs are [1, 4], [1, 4], [1, 4] and [4, 1]

Input: arr[] = [8, 16, 12, 16, 4, 0], k = 4
Output: 5
Explanation: There are 5 pairs with absolute difference 4, the pairs are [8, 12], [8, 4], [16, 12], [12, 16], [4, 0].

1- Brute Force: O(n^2)
*/


#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {1, 4, 1, 4, 5};
    int n = 5;
    int k = 3;

    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(abs(arr[i] - arr[j]) == k) {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}