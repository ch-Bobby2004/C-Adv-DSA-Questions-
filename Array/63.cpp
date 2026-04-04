// Nuber of subarrays having product less then k 
// given an array of positive number, calculate the  number of possible contiguous subarrays having product lesser than given number k.

// input  arr[] = 1,2,3,4   k=10
// op  1   2  3  4   1,2  1,2,3  2,3


// [1]
// [1,2]
// [1,2,3]
// [2]
// [2,3]
// [3]
// [4]

#include <iostream>
using namespace std;

int main(){

    int arr[] = {10,5,2,6};
    int n = 4;
    int k = 100;

    int count = 0;

    for(int i=0;i<n;i++){

        int product = 1;

        for(int j=i;j<n;j++){

            product *= arr[j];

            if(product < k)
                count++;
            else
                break; // no need to continue
        }
    }

    cout<<"Total subarrays = "<<count;
}



// O(n^2);