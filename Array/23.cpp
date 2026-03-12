#include<bits/stdc++.h>
using namespace std;


int main()
{
    // given an array of intergers find the average of all the element in it;
    int n =4;
    int arr[n] = {20,66,44,10};
    int  s = sizeof(arr);  //gives number of bytes
    int  size = sizeof(arr)/sizeof(arr[0]);  //gives number of element
    cout << s << endl;
    cout << size << endl;
    
    int sum = 0;
    
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }
    cout << sum <<endl; //sum
    cout << sum/size;  //average


    return 0;
}