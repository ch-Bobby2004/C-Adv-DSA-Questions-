// given of an array of size n; the task is to find all the leaders in array. an element is a leader if it is a greater than or
// equal to all element to its right side
// note the right most element is always a leader
// arr[] = {4,10,6,3,4,5}
// leader= {10,6,5}



#include <iostream>
using namespace std;

int main() {

    int arr[] = {4,10,6,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxLeader = arr[n-1];

    cout << "Leaders: ";
    cout << maxLeader << " ";  // rightmost leader

    for(int i=n-2; i>=0; i--){

        if(arr[i] >= maxLeader){
            maxLeader = arr[i];
            cout << maxLeader << " ";
        }
    }

    return 0;
}

// Time → O(n)