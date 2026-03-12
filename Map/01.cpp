#include <iostream>
#include <unordered_map>
using namespace std;
// 1. Counting frequency of elements in an array

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

    // Add array elements to unordered_map
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;  // increment count of arr[i]
    }

    // Print frequencies
    for (auto x : freq) {
        cout << "Element " << x.first << " occurs " << x.second << " times\n";
    }
}