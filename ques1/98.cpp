
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

1- Brute force: TC: O(n^3) - subarrays using 3 loops
*/



//Brute force : O(n^3)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {1, 4, 5, 3, 7, 9};
    int n = sizeof(a)/sizeof(a[0]);
    int c= 0;
    
    
    for(int i=0; i<n; i++)
    {
        
        for(int j=i+1; j<n; j++)
        {
            bool flag = true;
            
            for(int k =i; k<j ; k++)
            {
                if(a[k] >= a[k+1])
                {
                    flag = false;
                    break;
                }
            }
            
            if(flag == true)
            {
                c++;
            }
        }
    }
    
    cout << c << endl;
}
