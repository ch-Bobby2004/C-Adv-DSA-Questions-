/*
Question : Given a non-empty array of integers, every element appears twice except for one. Find that single one.

So if you're given an array: [2,1,5,3,1,5,2] the result will be 3 since 3 occurs once.

*/

#include <bits/stdc++.h>
using namespace std;
//TC: O(n^2)
int main()
{
    int arr[]={2,1,5,3,1,5,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
        if(count==1)
        {
            cout<<"Single element:"<<arr[i];
            break;
        }
    }
    return 0;
}





#include <bits/stdc++.h>
using namespace std;
//TC: O(nlong)
int main()
{
    int arr[]={2,1,5,3,1,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);

    for(int i=0; i<n-1; i=i+2)
    {
        if(arr[i]!=arr[i+1])
        {
            cout<<"Single element:"<<arr[i];
            break;
        }
    }
    return 0;
}




#include <bits/stdc++.h>
using namespace std;
//TC: O(n)
int main() {

    int arr[] = {1, 2, 5, 3, 5, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (auto x : freq) {
        if (x.second==1){
            cout<< x.first<< " frequence "<< x.second<< " times" << endl;
        }
    }
}

