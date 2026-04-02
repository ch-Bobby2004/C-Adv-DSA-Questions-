// givean a sorted array arr[] of size n, the goal is to rearrange the array so taht all distinct element apper at the beginnng in sorted order. additionally, returen the length of this distinct sorted subarray
// note;the element after the distinct ones can be in any order and hold any value, as they don't affect the result
// 
// int arr[] = {1,2,3,3,4,4,5};
// int arr[] ={1,2,3,4,5};


#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {1,1,2,2,3,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i = 0;

    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }

    int len = i + 1;

    cout<<len<<endl;

    for(int i=0; i<len;i++){
        cout<<arr[i]<<" ";
    }
}