/*

3 Sum - Triplet Sum in Array

Given an array arr[] and an integer sum, check if there is a triplet in the array which sums up to the given target sum.

Examples: 

Input: arr[] = [1, 4, 45, 6, 10, 8], target = 13
Output: true
Explanation: The triplet [1, 4, 8] sums up to 13

Input: arr[] = [1, 2, 4, 3, 6, 7], target = 10 
Output: true
Explanation: The triplets [1, 3, 6] and [1, 2, 7] both sum to 10. 

Input: arr[] = [40, 20, 10, 3, 6, 7], sum = 24 
Output: false
Explanation:  No triplet in the array sums to 24.

1- Brute Force. TC: O(n^3)
2- Optimised : TC: O(n^2)


ai + aj + ak = t
aj + ak = t - ai
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {1,4,45,6,10,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 13;

    bool flag = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k=j+1;k<n;k++){
                if((arr[i] + arr[j] +arr[k]) == m) {
                flag =true;
                break;
            }
            
            }
        if(flag)
        break;
            
        }
        if(flag)
        break;
    }
    cout<< flag;
    
    

}

// Tc O(n^3)
