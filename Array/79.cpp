// Counting frequencies of a array element
// given an array arr[] o f non-negative integers which may contain duplicte elements. Returen the frequency of eadch distinct element present in array
// input [10,20,10,5,20]
// output  [[5,1],[10,2],[20,2]]

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,2,3,3,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        bool visited = false;

        // Check if already counted
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                visited = true;
                break;
            }
        }

        if(visited) continue;

        int count = 1;
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }

        cout << arr[i] << " -> " << count << endl;
    }

    return 0;
}

// Brute force: TC: O(n^2)