// given an array of integer print the minimum and maximum element in it

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {20,66,44,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int minimum = arr[0];
    int maximum = arr[0];

    for(int i=1; i<size; i++){

        if(arr[i] < minimum){
            minimum = arr[i];
        }

        if(arr[i] > maximum){
            maximum = arr[i];
        }
    }

    cout << "Minimum = " << minimum << endl;
    cout << "Maximum = " << maximum;

    return 0;
}
