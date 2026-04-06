/*
2. Mean of array using recursion
Given an array arr[] of integers, calculate the mean (average) using recursion.

Note: The mean of an array is the sum of its elements divided by the number of elements in the array.

Examples: 
Input: arr[] = [1, 2, 3, 4, 5]
Output: 3
Explanation: The sum of elements (15) divided by the number of elements (5) gives the mean: 3

Input: arr[] = [1, 2, 3]
Output: 2
Explanation: The sum of elements (6) divided by the number of elements (3) gives the mean: 2

*/

#include <iostream>
using namespace std;

float sum(int arr[], int n){
    if(n==-1){
        return 0;
    }
    return arr[n] + sum(arr,n-1);
}

int main() {
 int arr[]={1,2,3,4,6};
 int n = sizeof(arr)/sizeof(arr[0]);
 cout<< sum(arr,n-1)/n;
 

}
