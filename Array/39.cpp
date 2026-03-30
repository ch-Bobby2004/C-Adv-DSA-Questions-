#include <bits/stdc++.h>
using namespace std;

int main() {
    //given an array of integers find the maximum product of two different element in it
    // for postive only
	int arr[]={2,3,4,5,2,14,53,20};
	int n  = sizeof(arr)/sizeof(arr[0]);
	int max1 = INT_MIN;
	int max2 = INT_MIN;
	for(int i=0;i<n;i++){
	    if(arr[i]>max1){
	        max2 = max1;
	        max1 = arr[i];
	    }
	   else if(arr[i] > max2){
            max2 = arr[i];
        }
	}

    cout << "Largest = " << max1 << endl;
    cout << "Second Largest = " << max2 << endl;
    cout << "Maximum Product = " << max1 * max2 << endl;


}
