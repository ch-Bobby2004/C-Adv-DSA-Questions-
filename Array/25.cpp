#include<bits/stdc++.h>
using namespace std;


int main()
{
    // given an array of intergers find the minmum of all the element in it;
    int arr[] = {20,66,44,10};
    int  size = sizeof(arr)/sizeof(arr[0]);  
    
    int sum = 0;
    int min = arr[0];
    
    for(int i=1; i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout << min;


    return 0;
}