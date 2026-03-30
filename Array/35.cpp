// 	// given an array of 0s and 1s find the longest consecutive sequence of all 1s or all 0s
// 	0000  → octal → decimal 0

#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,1,0,0,0,1,1,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxCount = 1;
    int current = 1;

    for(int i=1; i<n; i++){

        if(arr[i] == arr[i-1]){
            current++;      // continue streak
        }
        else{
            current = 1;    // reset streak
        }

        if(current > maxCount){
            maxCount = current;
        }
    }

    cout << "Longest sequence = " << maxCount;

    return 0;
}
