#include <iostream>
using namespace std;

//sliding window
int main(){

    int arr[] = {10,5,2,6};
    int n = 4;
    int k = 100;

    int left = 0;
    int product = 1;
    int count = 0;

    for(int right = 0; right < n; right++){

        product *= arr[right];

        while(product >= k){
            product /= arr[left];
            left++;
        }

        count += (right - left + 1);
    }

    cout<<"Total subarrays = "<<count;
}


// O(n);
