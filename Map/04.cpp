// Problem 1: Two Sum

// Description:

// Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to target.

// You may assume that each input has exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]

// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]

// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]


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



#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 9;
    unordered_map<int,int> mp; // number → index

    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if(mp.count(complement)) {
            cout << mp[complement] << " , " << i;
            return 0;
        }
        mp[nums[i]] = i;
    }
}





// Optimal time complexity O(n)

// Uses extra space O(n) for the map