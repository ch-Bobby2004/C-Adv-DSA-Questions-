// reverse in same array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12,32,443,4,34};
    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0;
    int end = n - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



        //   int arr[] = {5,4,6,2,1,10};
    	// int n = sizeof(arr)/sizeof(arr[0]);
    	// int start = 0;
    	// int end = n-1;
    	// int temp =0;
    	
    	
    	// for(int i=start;i<end;i++){
    	//     temp = arr[end];
    	//     arr[end] =arr[start];
    	//     arr[start] =temp;
    	//     start++;
    	//     end--;
    	// }
    	
    	
    	// for(int i=0;i<n;i++){
    	//     cout<<arr[i] <<" ";
    	// }


    return 0;
}

