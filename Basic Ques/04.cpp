// Problem Statement

// Given an array of integers and a target number, find two indices of numbers whose sum equals the target.

// Example
// Input:
// nums = [2, 7, 11, 15]
// target = 9
// Output:
// [0, 1]

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2,7,11,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    for(int i =0; i<n;i++){
        for(int j = i+1; j< n ; j++ ){
            int tar = arr[i] + arr[j];
            if( tar== target){
                cout<<i << " , " << j;
                break;
            }
        }
    }

}

// Brute Force Solution (O(n²))
