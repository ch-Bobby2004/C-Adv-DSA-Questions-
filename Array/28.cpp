#include<bits/stdc++.h>
using namespace std;

int main()
{
    // given an array of distinct integers, find the 2nd largest elemnet in it.
    int arr[] = {20,66,44,10,33,55,55,32};
    int size = sizeof(arr)/sizeof(arr[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0; i<size; i++){

        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }

        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest = " << secondLargest << endl;
    cout << " Largest = " << largest;



    // int arr[] = {5,4,6,2,1,10};
	// int n = sizeof(arr)/sizeof(arr[0]);
	// int max = arr[0];
	// int max2;
	// for(int i=0;i<n;i++){
	//     if(arr[i]>max){
	//         max2 = max;
	//         max=arr[i];
	//     }
	// }
	// cout << max << endl;
	// cout << max2 << endl;

    return 0;
}

