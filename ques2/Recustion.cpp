
// 2Check whether an array is sorted using recursion.


// bool isSorted(int arr[], int n) {

//     // Base case
//     if (n == 1) {
//         return true;
//     }

//     // Check first two elements
//     if (arr[0] > arr[1]) {
//         return false;
//     }

//     // Recursive call
//     return isSorted(arr + 1, n - 1);
// }







#include <bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n){
    if(n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return sorted(arr+1,n-1);
}

int main() {
	int arr[]={1,2,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	if (sorted(arr,n-1)){
	    cout<<"sorted";
	}
}



// isSorted({1,2,3},3)
// → calls isSorted({2,3},2)
//     → calls isSorted({3},1)
//         → return true  (base case)
//     ← return true
// ← return true
