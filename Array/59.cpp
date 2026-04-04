/*
Missing ranges of numbers

You have an inclusive interval [lower, upper] and a sorted array of unique integers arr[], all of which lie within this interval. A number x is considered missing if x is in the range [lower, upper] but not present in arr. Your task is to return the smallest set of sorted ranges that includes all missing numbers, ensuring no element from arr is within any range, and every missing number is covered exactly once.


eg1: Input: arr[] = [14, 15, 20, 30, 31, 45], lower = 10, upper = 50
op:  [[10, 13], [16, 19], [21, 29], [32, 44], [46, 50]]


c1 - > lower -> (a[0] -1)
c2 ->   if(a[i+1] - a[i] > 1) === a[i]+1 -> a[i+1] -1
c3 -> a[n-1]+1 -> upper

*/


#include <bits/stdc++.h>
using namespace std;

//TC: O(n)
int main() { 
//   int arr[]={14,15,20,30,31,45};
   
//   int lower=10,upper=50;

    int arr[] = {-48, -10, -6, -4, 0, 4, 17};
    int lower = -54, upper = 17;

   int n=size(arr);
   if(arr[0]-lower>1){
       cout<<"["<<lower<<","<<arr[0]-1<<"]";
   }
   
   for(int i=0;i<n-1;i++){
     if(arr[i+1]-arr[i]>1){
          cout<<"["<<arr[i]+1<<","<<arr[i+1]-1<<"]";
     }
   }
   
   if(upper-arr[n-1]>1){
       cout<<"["<<arr[n-1]+1<<","<<upper<<"]";
   }
}
