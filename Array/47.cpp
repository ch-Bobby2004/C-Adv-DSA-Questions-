// 	given an array of integers find the maximum possible product of any 3 element in it
// note : not consider same element more than once

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 10, 2, 6, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxProduct = arr[0] * arr[1] * arr[2];

    for(int i = 0; i < n-2; i++) {
        for(int j = i+1; j < n-1; j++) {
            for(int k = j+1; k < n; k++) {

                // int product = ;

                
                maxProduct = max( maxProduct,arr[i] * arr[j] * arr[k]);
            }
        }
    }

    printf("Maximum product = %d", maxProduct);

    return 0;
}


// TC = o(n^3)











#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {2, 3, -100, 4, 5, 2, 14, 53, 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Sort the array
    sort(arr, arr + n);

    int product1 = arr[n-1] * arr[n-2] * arr[n-3]; // 3 largest
    int product2 = arr[0] * arr[1] * arr[n-1];     // 2 smallest * largest

    int maxProduct = max(product1, product2);

    cout << "Maximum product = " << maxProduct;

    return 0;
}


// TC = O(nlogn)
