#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {3,1,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int freq[n+1] = {0};   // create frequency array   //index

    // Count frequency  //index
    for(int i=0;i<n;i++){
         freq[arr[i]]++ ; //chatgpt then understand better
    }
    
    // for(int i=1;i<n;i++){
    //      cout<< freq[i]<<endl;
    // }

    int duplicate = -1;
    int missing = -1;

    // Check freq array
    for(int i=1;i<=n;i++){
        if(freq[i] == 0){
            missing = i;
        }
        else if(freq[i] == 2){
            duplicate = i;
        }
    }

    cout<<"Duplicate = "<<duplicate<<endl;
    cout<<"Missing = "<<missing;

    return 0;
}


// Time → O(n)
// Space → O(n) (extra array)
