/*

Count Strictly Increasing Subarrays

Given an integer array arr[], the task is to count the number of subarrays in arr[] that are strictly increasing and have a size of at least 2. A subarray is a contiguous sequence of elements from arr[]. A subarray is strictly increasing if each element is greater than its previous element.

Examples:

Input: arr[] = [1, 4, 5, 3, 7, 9]
Output: 6
Explanation: The strictly increasing subarrays are: [1, 4], [1, 4, 5], [4, 5], [3, 7], [3, 7, 9], [7, 9]

Input: arr[] = [1, 3, 3, 2, 3, 5]
Output: 4
Explanation: The strictly increasing subarrays are: [1, 3], [2, 3], [2, 3, 5], [3, 5] 

Input: arr[] = [2, 2, 2, 2]
Output: 0
Explanation: No strictly increasing subarray exists.


*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {2, 2, 2, 2};
    
    int n = sizeof(a)/sizeof(a[0]);
    int c= 0;
    int l = 1;
    
    for(int i=1; i<n ; i++)
    {
        if(a[i] > a[i-1])
        {
            l++;
        }
        else
        {
            c = c + (l*(l-1))/2;
            l=1;
        }
    }
    
    c = c + (l*(l-1))/2;
    
    cout << c << endl;
}


//  Optimised - TC: O(n) - using maths.





