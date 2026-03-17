#include<bits/stdc++.h>
using namespace std;


int main()
{
    // given an array of intergers find the max of all the element in it;
    int arr[] = {20,66,44,10};
    int  size = sizeof(arr)/sizeof(arr[0]);  
    
    int sum = 0;
    int max = arr[0];
    
    for(int i=1; i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout << max;


    return 0;
}