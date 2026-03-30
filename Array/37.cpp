	//given an array of intergers, reverse the array in groups of k.
// 	a = {3,5,1,4,7,8,5,8}   k=3
// 	output  1 5 3 4 7  8 5 8


#include <iostream>
using namespace std;

void reverseGroup(int arr[], int start, int end){

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {

    int arr[] = {3,5,1,4,7,8,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    for(int i=0; i<n; i += k){

        int start = i;
        int end = i + k - 1;

        // VERY IMPORTANT (avoid out of bound)
        if(end >= n){
            end = n-1;
        }

        reverseGroup(arr, start, end);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

