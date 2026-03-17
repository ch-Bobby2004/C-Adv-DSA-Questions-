#include <iostream>
using namespace std;

int main()
{
    // given an array of integers, reverse it.
    // part1 can create a new array to store reverse
    int arr1[] = {12,32,443,4,34};
    int n = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[n];
    int j = 0;

    for(int i=n-1; i>=0; i--){
        
        arr2[j] = arr1[i];
        j++;
    }

    // print reversed array
    for(int i=0;i<n;i++){
        cout << arr2[i] << " ";
    }




    // int arr[] = {5,4,6,2,1,10};
	// int n = sizeof(arr)/sizeof(arr[0]);
	// int arr2[n];
	// cout << n<< endl;

	// for(int i=n-1;i>=0;i--){
	//     arr2[n-i-1]=arr[i];
	// }
	
	
	// for(int i=0;i<n;i++){
	//     cout<<arr2[i] <<" ";
	// }

    return 0;
}









