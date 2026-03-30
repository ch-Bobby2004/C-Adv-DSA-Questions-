
    // given an array of distinct integer, find the 1 2 and 3 smallest element in it.

    #include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {3,5,1,4,7,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int small = INT_MAX;
    int small2 = INT_MAX;
    int small3 = INT_MAX;

    for(int i=0; i<n; i++){

        if(arr[i] < small){
            small3 = small2;
            small2 = small;
            small = arr[i];
        }

        else if(arr[i] < small2 && arr[i] != small){
            small3 = small2;
            small2 = arr[i];
        }

        else if(arr[i] < small3 && arr[i] != small2){
            small3 = arr[i];
        }
    }

    cout << "1st smallest = " << small << endl;
    cout << "2nd smallest = " << small2 << endl;
    cout << "3rd smallest = " << small3 << endl;

    return 0;
}



