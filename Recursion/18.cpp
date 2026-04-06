#include <bits/stdc++.h>
using namespace std;

/*

Minimum and Maximum elements Using Recursion

Given an array of integers arr[], find the minimum and maximum elements in the array using recursion only. The first element of the output represents the minimum value, and the second element represents the maximum value in the array.

Examples:

Input: arr[] = [1, 4, 3, -5, -4, 8, 6]
Output: [-5, 8]
Explanation: -5 is the minimum and 8 is the maximum element in the array

Input: arr[] = [12, 3, 15, 7, 9]
Output: [3, 15]
Explanation: 3 is the minimum and 15 is the maximum element in the array

*/



#include <iostream>
#include <climits>
using namespace std;

// Function to find both min and max using recursion
void findMinMax(int arr[], int size, int &minVal, int &maxVal) {
    // Base case: when only one element is left
    if (size == 0) {
        minVal = arr[0];
        maxVal = arr[0];
        return;
    }

    // Recursive case: find min and max in the rest of the array
    findMinMax(arr, size - 1, minVal, maxVal);

    // Update the min and max values based on the current element
    minVal = (arr[size] < minVal) ? arr[size] : minVal;
    maxVal = (arr[size ] > maxVal) ? arr[size] : maxVal;
}

int main() {
     int arr[] = {1,4,45,6,10,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minVal = INT_MAX, maxVal = INT_MIN;

    // Call the function to find min and max
    findMinMax(arr, n-1, minVal, maxVal);

    cout << "Minimum value: " << minVal << endl;
    cout << "Maximum value: " << maxVal << endl;

    return 0;
}





















