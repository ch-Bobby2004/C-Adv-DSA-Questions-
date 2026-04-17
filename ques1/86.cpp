// Counting frequencies of a array element
// given an array arr[] o f non-negative integers which may contain duplicte elements. Returen the frequency of eadch distinct element present in array
// input [10,20,10,5,20]
// output  [[5,1],[10,2],[20,2]]

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

    // Count frequencies
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print frequencies
    for(auto x : freq) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}

// using Unordered map. TC: O(n)