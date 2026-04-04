/*

First negative integer in every window of size k


Given an array and a positive integer k, find the first negative integer for each window(contiguous subarray) of size k. If a window does not contain a negative integer, then print 0 for that window.

Examples:  

Input: arr[] = [-8, 2, 3, -6, 1] , k = 2
Output: [-8, 0, -6, -6]
Explanation: First negative integer for each window of size 2
                        [-8, 2] = -8
                        [2, 3]= 0 (does not contain a negative integer)
                        [3, -6] = -6
                        [-6, 10] = -6

Input: arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output: [-1, -1, -7, -15, -15, 0]

Explanation: First negative integer for each window of size 3
                       [ 12, -1, -7] = -1
                      [-1,-7, 8] = -1
                     [-7, 8, -15] = -7
                    [8, -15, 30] = -15
                   [-15, 30, 16] = -15
                  [30, 16, 28] = 0
                  
1- Brute Force:
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
//     Input: arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
// Output: [-1, -1, -7, -15, -15, 0]
    
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    
    for(int i = 0; i <= n - k; i++) {
        
        bool found = false;
        
        for(int j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                cout << arr[j] << " ";
                found = true;
                break;
            }
        }
        
        if(!found) {
            cout << "0 ";
        }
    }

    return 0;
}


// TC  O(n × k)




// int main()
// {
//     int a[] = {-8, 2, 3, -6, 1};
//     int k = 2;
//     // n=5, k =3, 
//     // no of windows = n-k+1
    
//     int n = sizeof(a)/sizeof(a[0]);
    
//     int res[n-k+1]= {0};
    
//     for(int i = 0; i<= (n-k); i++)
//     {
//         int mn = 0;
        
//         for(int j=i; j<(i+k); j++)
//         {
//             if(a[j] < 0)
//             {
//                 mn = a[j];
//                 break;
//             }
//         }
        
//         res[i] = mn;
//     }
    
//     for(int i =0; i<=(n-k) ; i++)
//     {
//         cout << res[i] << " ";
//     }
// }
