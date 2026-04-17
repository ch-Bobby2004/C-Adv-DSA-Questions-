// 1️⃣ Find the second largest element in an array without sorting.


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // int arr[] = {3,5,4,6,7,11,23,20,2};
//     int arr[] = {5,5,5,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int largest = INT_MIN;
//     int second_largest = INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             second_largest = largest;
//             largest = arr[i];
//         }
//         else if(arr[i]>second_largest && arr[i]!=largest){
//             second_largest = arr[i];
//         }
        
//     }
//     if(largest == second_largest){
//         cout<<"No second largest element";
//     }
//     else{
//         cout<<second_largest;
//     }
    

// }

//////////////////////////////////////////////////////////////////////////////////////

// 2️⃣ Move all zeros to the end of the array while maintaining the order of other elements.
// Example: [0,1,0,3,12] → [1,3,12,0,0]


// #include <bits/stdc++.h>
// using namespace std;


// int main() {
// 	 int arr[] = {0,1,0,3,12};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             arr[j]=arr[i];
//             j++;
//             arr[i]=0;
//         }
//     }
//     cout<<"[";
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//         if(i<n-1)
//         cout<<",";
//     }
//     cout<<"]";

// }

//tc:O(1)
//sp:O(1)
