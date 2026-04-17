
// 2 -Brute force: TC: O(n^2) - subarrays using 2 loops
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
        
            if(a[j-1] >= a[j])
            {
                break;
            }
        
            c++;
        }
    }
}
    
    