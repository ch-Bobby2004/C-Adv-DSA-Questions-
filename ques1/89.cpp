/*

Find duplicates:
Given an array arr[] of n elements that contains elements from 0 to n-1, with any of these numbers appearing any number of times. The task is to find the repeating numbers.

Note: The repeating element should be printed only once.

Input: n = 7, arr[] = [1, 2, 3, 6, 3, 6, 1]
Output: 1, 3, 6
Explanation: The numbers 1 , 3 and 6 appears more than once in the array.

Input : n = 5, arr[] = [1, 2, 3, 4 ,3]
Output: 3
Explanation: The number 3 appears more than once in the array.


*/

//TC: O(n)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,6,3,6,1};
    
    int n=sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }

    for(auto it:m)
    {
        if(it.second>1)
        {
            cout << it.first << " ";
        }
    }

    return 0;
}
