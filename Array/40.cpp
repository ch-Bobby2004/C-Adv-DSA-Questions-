
// Negative × Negative = Positive

    //given an array of integers find the maximum product of two  element in it
#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[]={2,3,-100,4,5,2,14,53,53,20};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for(int i=0;i<n;i++){

        // find two largest
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 ){
            max2 = arr[i];
        }

        // find two smallest
        if(arr[i] < min1){
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i] < min2 ){
            min2 = arr[i];
        }
    }

    int ans = max(max1*max2, min1*min2);

    cout<<"Maximum Product = "<<ans;

}