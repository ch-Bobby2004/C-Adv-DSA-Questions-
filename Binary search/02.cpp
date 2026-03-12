// If the array is sorted, you can find the total number of occurrences of an element using binary search.
// Idea
// Find the first occurrence (leftmost index).
// Find the last occurrence (rightmost index).


// count=(last−first)+1

// If the element is not present, count = 0.

#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int target){
    int l = 0, r = n-1, ans = -1;

    while(l <= r){
        int mid = (l+r)/2;

        if(arr[mid] == target){
            ans = mid;
            r = mid - 1;
        }
        else if(arr[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return ans;
}

int lastOcc(int arr[], int n, int target){
    int l = 0, r = n-1, ans = -1;

    while(l <= r){
        int mid = (l+r)/2;

        if(arr[mid] == target){
            ans = mid;
            l = mid + 1;
        }
        else if(arr[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return ans;
}

int main(){
    int arr[] = {1,2,2,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 2;

    int first = firstOcc(arr, n, target);
    int last = lastOcc(arr, n, target);

    int count = 0;

    if(first != -1)
        count = last - first + 1;

    cout << "Total occurrences: " << count;

    return 0;
}

// O(log n) (binary search)