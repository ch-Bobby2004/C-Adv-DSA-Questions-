/*

Majority Element


Given an array arr[] of size n, find the element that appears more than ⌊n/2⌋ times. If no such element exists, return -1.

Examples:

Input: arr[] = [1, 1, 2, 1, 3, 5, 1]
Output: 1
Explanation: Element 1 appears 4 times. Since ⌊7/2⌋ = 3, and 4 > 3, it is the majority element.

Input: arr[] = [7]
Output: 7
Explanation: Element 7 appears once. Since ⌊1/2⌋ = 0, and 1 > 0, it is the majority element.

Input: arr[] = [2, 13]
Output: -1
Explanation: No element appears more than ⌊2/2⌋ = 1 time, so there is no majority element.

1- Brute force: TC: O(n^2),  SC: O(1)

*/
#include <bits/stdc++.h>
using namespace std;

//TC: O(n) , SC : O(n)
int main()
{
    int a[]={1,1,1,2,1,3};
    int n = sizeof(a)/sizeof(a[0]);
    int freq[n]={0};
    int c= 0;
    int flag = 0;
    
    for(int i=0; i<n; i++){
        freq[a[i]]++;
    }
    for (int i=0;i<n;i++){
        if(freq[i]>(n/2)){
            cout<<a[i]<<" ";
            flag = 1;
            break;
        }
        
    }
    
    if(flag == 0)
    {
         cout<< -1 ;
    }
    
  
}


int main(){
  int a[]={1,1,1,2,1,3};
    int n = sizeof(a)/sizeof(a[0]);


    sort(a, a+n);
    
    int candidate = a[n/2];
//        for(int i=0;i<n;i++){
//        cout<<a[i]<<en;
//    }
    
    int count = 0;
    for (int num : a) {
        if (num == candidate) {
            count++;
        }
    }

    if (count > n/2) {
        return candidate;
    }
}