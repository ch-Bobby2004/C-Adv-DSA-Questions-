#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr[] = {1,4,45,6,10,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 13;
    sort(arr,arr+n);


 for(int i=0;i<n-2;i++){
     int left = i+i;
     int right = n-1;
     while(left<right){
         int sum= arr[i] + arr[left] + arr[right];
         if(sum==k){
             cout<<"True";
             return 0;
         }
         else if(sum>k){
             right --;
         }
         else{
             left++;
         }
         

     }
 }

  
    return 0;
}

// Tc O(n^2)