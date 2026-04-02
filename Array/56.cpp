// // 	product of array except self
//   given an array arr[] of n integers, construct a product array res[] (of the same size) such that res[i] is equal to the product of all the element of arr[] except arr[i]

// arr = [1,2,3,4]

// Output:
// res = [24,12,8,6]
// Why?
// res[0] = 2*3*4 = 24
// res[1] = 1*3*4 = 12
// res[2] = 1*2*4 = 8
// res[3] = 1*2*3 = 6


#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int res[n];

    for(int i=0;i<n;i++){
        int product = 1;

        for(int j=0;j<n;j++){
            // if(i != j){
            //     product *= arr[j];
            // }
            if(i == j){
               continue;
            }
            else{
                 product *= arr[j];
            }
        }

        res[i] = product;
    }

    for(int i=0;i<n;i++)
        cout<<res[i]<<" ";
}

// TC : o(n^2)