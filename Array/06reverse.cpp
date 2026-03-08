#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n) {
    int left=0, right = n-1;
    while(left<right){
        int tem = arr[left];
         arr[left]= arr[right];
        arr[right] = tem;
        left++;
        right--;
    }
}

int main() {
   int arr[] ={ 2,4,2,5,6,7,2};
   int n = sizeof(arr)/sizeof(arr[0]);
   reverse(arr,n);
   for(int i =0 ;i<n;i++){
       cout<<arr[i]<< " ";
   }

}
