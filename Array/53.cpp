#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {3,1,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n);   

    int duplicate = -1;
    int missing = -1;

    for(int i=0;i<n-1;i++){

        if(arr[i] == arr[i+1]){
            duplicate = arr[i];
        }


        if(arr[i+1] - arr[i] > 1){
            missing = arr[i] + 1;
        }
    }

    if(arr[0] != 1)
        missing = 1;

    if(arr[n-1] != n)
        missing = n;

    cout<<duplicate<<endl;
    cout<<missing;

    return 0;
}
// Tc(nlogn)