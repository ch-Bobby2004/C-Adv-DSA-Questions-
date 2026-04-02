#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int res[n]; //result array

    // Step 1: prefix
    res[0] = 1;
    for(int i=1;i<n;i++){
        res[i] = res[i-1] * arr[i-1];
    }

//     res = {1, 1, 2, 6}
// These are prefix products

    // Step 2: suffix
    // (prefix product) × (suffix product)
    int suffix = 1;

    for(int i=n-1;i>=0;i--){
        res[i] = res[i] * suffix;
        suffix *= arr[i];
    }

    // print
    for(int i=0;i<n;i++)
        cout<<res[i]<<" ";
}
