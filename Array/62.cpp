
//Equal odd-even sum after removal
// given an arry arr[], count how many indices can be removed such that the sum of elements at even indices Equal the sum of elements at odd indices in the resulting arry
//  intput 2,1,6,4
// output 1

#include <iostream>
using namespace std;

int main(){

    int arr[] = {2,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int count = 0;

    for(int remove = 0; remove < n; remove++){

        int evenSum = 0;
        int oddSum = 0;
        int newIndex = 0; //track even or odd

        for(int i = 0; i < n; i++){

            if(i == remove) continue; // skip removed element

            if(newIndex % 2 == 0)
                evenSum += arr[i];
            else
                oddSum += arr[i];

            newIndex++;
        }

        if(evenSum == oddSum)
            count++;
    }

    cout << count;
}


// Tc  o(n^2)
