#include <bits/stdc++.h>
using namespace std;
// swapping alternate elements
void swapAlternate(int arr[], int n) {
    for(int i = 0; i < n; i += 2) {
        if(i < n - 1) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, n);
    
    swapAlternate(arr, n);
    
    cout << "Array after swapping alternate elements: ";
    printArray(arr, n);
    
    return 0;
}