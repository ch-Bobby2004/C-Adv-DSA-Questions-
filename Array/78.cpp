// merge two sorted array
// given two sorted arrays arr1[] of size n and arr2[] of size m . merge these two array
// merge in sorted

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr1[] = {1, 3, 4, 5};
    int arr2[] = {2, 4, 6, 8};


    int  n1 = sizeof(arr1)/sizeof(arr1[0]);
    int  n2 = sizeof(arr2)/sizeof(arr2[0]);
    int merge[n1 + n2];

    int i= 0, j= 0, k= 0;

    while (i <n1 && j< n2) {
        if (arr1[i] < arr2[j]) {
            merge[k++]= arr1[i++];
        } else {
            merge[k++]= arr2[j++];
        }
    }

    while (i < n1) {
        merge[k++]=arr1[i++];
    }

    while (j < n2) {
        merge[k++] =arr2[j++];
    }

    for (int x = 0; x < n1+n1; x++) {
        cout << merge[x] << " ";
    }

    return 0;
}