#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {

    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;

    d = d % n;   // NEVER forget this

    reverseArray(arr, 0, d-1);
    reverseArray(arr, d, n-1);
    reverseArray(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

// tc: O(n)
// sp : O(1)

// 1 2 | 3 4 5 6 7
// 2 1 | 7 6 5 4 3
// 3 4 5 6 7 1 2