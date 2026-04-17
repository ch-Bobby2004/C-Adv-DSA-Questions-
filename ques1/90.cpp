#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,6,3,6,1};
    
    int n=sizeof(a)/sizeof(a[0]);

    int freq[n]= {0};
    
    for(int i=0; i<n; i++)
    {
        freq[a[i]]++;
    }
    
    for(int i=0; i<n; i++)
    {
        if(freq[i] > 1)
        {
            cout << i << " ";
        }
    }

    return 0;
}
// optimised without hashmap. O(n)
