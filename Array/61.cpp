// Idea (Super Simple)

// Instead of checking all subarrays:

//  Keep adding elements to a running sum.
//  If the sum becomes negative → reset it to 0.
//  Always track the maximum sum.

// Because a negative sum will only reduce future sums.


#include <iostream>
using namespace std;

int main(){

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int currSum = arr[0];
    int maxSum = arr[0];

    for(int i = 1; i < n; i++){

        currSum = max(arr[i], currSum + arr[i]);

        if(currSum > maxSum){
            maxSum = currSum;
        }
    }

    cout << "Maximum Subarray Sum = " << maxSum;
}

// TC o(n)  
// is calld kadanes algo
