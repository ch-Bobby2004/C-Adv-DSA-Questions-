

    //given an array non-negative integer.the array represent a numbers.
    // you have to +1 in the number and print in new array
    // note: the input in given in such a manner the input size can not be change
    
    // 
    // output
#include <iostream>
using namespace std;
int main() {

    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i;

    // Start from last digit
    for(i = n-1; i >= 0; i--){

        if(arr[i] < 9){
            arr[i]++;      // add 1
            break;         // stop (no carry)
        }
        else{
            arr[i] = 0;    // carry
        }
    }

    // If i becomes -1 → all digits were 9
    if(i == -1){

        int newArr[n+1];

        newArr[0] = 1;
        for(int j=1; j<=n; j++){
            newArr[j] = 0;
        }

        for(int j=0; j<=n; j++){
            cout << newArr[j] << " ";
        }
    }
    else{
        for(int j=0; j<n; j++){
            cout << arr[j] << " ";
        }
    }

    return 0;

    
}