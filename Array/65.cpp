// Longest Mountain subarray
// given an array arr[] with N elements, the task is to find out the longest sub-array with has the shape of a Mountain
// note: a Mountain sub-array start with an increasing sequence,reaches a peak, and then follows a decreasing sequence
// arr[4,3,5,7,9,6,3,2,8]
//   3,5,7,9,6,3,2,
// output 7

#include <iostream>
using namespace std;

int main(){

    int arr[] = {4,3,5,7,9,6,3,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxLen = 0;

    for(int i = 1; i < n-1; i++){

        // check if arr[i] is a peak
        if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){

            int left = i - 1;
            int right = i + 1;

            // move left while increasing
            while(left > 0 && arr[left-1] < arr[left]){
                left--;
            }

            // move right while decreasing
            while(right < n-1 && arr[right] > arr[right+1]){
                right++;
            }

            int length = right - left + 1;
            maxLen = max(maxLen, length);
        }
    }

    cout << "Longest Mountain Length = " << maxLen;
}

// oter loop O(N)

// Inner while loops

// For every peak, you expand:

// Left side → up to O(N)

// Right side → up to O(N)


// Worst case time complexity:
// O(n^2)