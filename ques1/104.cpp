/*

Count Subarrays With Exactly K Distinct Elements

Given an array arr[] and an integer k, the task is to find the count of subarrays such that each subarray has exactly k distinct elements.

Examples:

Input: arr[] = [1, 2, 2, 3], k = 2 
Output: 4 
Explanation: Subarrays with exactly 2 distinct elements are: [1, 2], [1, 2, 2] and [2, 3].

Input: arr[] = [3, 1, 2, 2, 3], k = 3 
Output: 4
Explanation: Subarrays with exactly 3 distinct elements are: [3, 1, 2], [3, 1, 2, 2], [3, 1, 2, 2, 3] and [1, 2, 2, 3].

Input: arr[] = [1, 1, 1, 1], k = 2
Output: 0
Explanation: There is no subarray having exactly 2 distinct integers.

1- using set 

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {3, 1, 2, 2, 3};
    int k = 3;
    int n = sizeof(a)/sizeof(a[0]);
    int count = 0;
    
    
    for(int i=0; i<n; i++)
    {
        unordered_set<int> s;      // unordered_set used to stored only distinct element
        
        for(int j=i; j<n; j++)
        {
            s.insert(a[j]);
            
            if(s.size() > k)
            {
                break;
            }
            else if(s.size() == k)
            {
                count++;
            }
        }
    }
    
    cout << count;
    
}