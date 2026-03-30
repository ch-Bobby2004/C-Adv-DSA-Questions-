    //given an array 2s 3s and 4s move all 2s befor 3s and 3s before 4s
#include <iostream>
using namespace std;

int main() {
    //slection sort  time complexity O(n2)

    int arr[] = {2,3,4,4,3,2,3,4,2,4,3,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
               int temp = arr[j];
                arr[j] = arr[i];
                arr[i] =temp;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout << arr[i] <<endl;
    }

    


    return 0;
}