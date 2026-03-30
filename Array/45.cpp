    //given an array 2s 3s and 4s move all 2s befor 3s and 3s before 4s


    // Time → O(n)
    // Space → O(1)  //independent of n
#include <iostream>
using namespace std;

int main() {

    int arr[] = {3,4,2,3,2,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int c2 = 0, c3 = 0, c4 = 0;

    // Count
    for(int i=0;i<n;i++){
        if(arr[i] == 2) c2++;
        else if(arr[i] == 3) c3++;
        else if(arr[i] == 4) c4++;
    }

    // Fill array
    int index = 0;

    for(int i=0;i<c2;i++) arr[index++] = 2;
    for(int i=0;i<c3;i++) arr[index++] = 3;
    for(int i=0;i<c4;i++) arr[index++] = 4;

    // Print
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}