

// 2- Prefix sum array. TC: O(n), SC: O(n)
#include <bits/stdc++.h>
using namespace std;

//Prefix sum code

int main() {

    int a[] = {2, 3};
    int n = sizeof(a)/sizeof(a[0]);
    int k=1;

    int prefixSum[n];
    prefixSum[0] = a[0];
    int currSum = 0;
    
    for(int i=1; i<n; i++)
    {
        prefixSum[i] = prefixSum[i-1] + a[i];
    }
    
    for(int i=0; i<n; i++)
    {
        cout << prefixSum[i] << " ";
    }
    
    int maxSum = prefixSum[k-1];
    
    for(int i =0; i< n-k; i++)
    {
        currSum = prefixSum[i+k] - prefixSum[i];
        maxSum = max(currSum, maxSum);
        
    }
    
    cout << endl;
    
    cout << "Max sum is: " << maxSum;
}