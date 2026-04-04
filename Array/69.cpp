/*

Flipping Bits with K-Window

Given a binary array arr[], Find minimum number of operations to convert all 0s to 1s. In one operation, we can select a subarray (window) of length k and flip all its bits. If it is impossible, return -1.

flip: 0-->1, 1-->0

Input: arr[] = [1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1], k = 2

s1: [1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1]
s2: [1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1]
s3: [1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1]
s3: [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]

total ops = 4



Input: arr[] = [0, 0, 1, 1, 1, 0, 0], k = 3
op: -1


1- Brute force: O(n*k)

*/

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    int count = 0;
    bool possible = true;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            
            // Check if we can flip k elements
            if (i + k > n) {
                possible = false;
                break;
            }

            // Flip next k elements
            for (int j = i; j < i + k; j++) {
                arr[j] = 1 - arr[j];   // flip 0->1 and 1->0
            }

            count++;
        }
    }

    if (possible)
        cout << count;
    else
        cout << -1;

    return 0;
}

// Time Complexity:

// O(n × k) (Brute Force)