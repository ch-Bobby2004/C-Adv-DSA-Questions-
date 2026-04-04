// maximum subarray sum--> imp
// given an integer array arr[], find the subarray(containing at least one element) which 
// has the maximum possible sum, and return that sum.
// NOte: a subarray is continous part of an array


#include <iostream>
using namespace std;

int main(){

    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxSum = arr[0]; // important (handles negative arrays)

    for(int i = 0; i < n; i++){

        int currSum = 0;

        for(int j = i; j < n; j++){

            currSum += arr[j];   // add next element

            if(currSum > maxSum){
                maxSum = currSum;
            }
        }
    }

    cout << "Maximum Subarray Sum = " << maxSum;
}
// [-2]
// [-2,1]
// [-2,1,-3]
// ...

// [4,-1,2,1]   ← sum = 6 (MAX)

// Tc:O(n^2)



// {-5, -2, -8}
// Correct answer = -2
// Your code returns = 0 ❌

