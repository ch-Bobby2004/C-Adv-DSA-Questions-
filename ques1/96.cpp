


// 3 - Sliding window. TC: O(n), SC: O(1)
#include <bits/stdc++.h>
using namespace std;

// Sliding window code 
// whare k is fixed you can apply sliding window

int main() {

    int arr[] = {250,250,10,10,300};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=2;

    if (n <k) {
        return 0;
    }

    int sum2 = 0;
    int maxsum =0;
    for (int i = 0; i < n; i++) {
        
        if(i<k){
            sum2 += arr[i] ;
        }
        
         else if(i>=k){
             sum2 += arr[i] - arr[i-k];
         }
        
       maxsum =  max(maxsum,sum2);
    }
    
    cout<<maxsum;

}