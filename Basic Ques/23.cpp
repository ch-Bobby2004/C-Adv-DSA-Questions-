#include<bits/stdc++.h>
using namespace std;


int main()
{
    // print prime number between given  range
    int start =1 ,end =100 ;
    for(int i=start ; i<=end ;i++){
        if(i < 2) continue; // skip 0 and 1
        int flag =1;
       for(int j =2;j<i;j++){
        // for(int j =2;j<sqrt(i);j++){   
           if(i%j==0){
               flag=0;
               break;
           }
       }
       if(flag==1){
           cout <<i<<" ";
       }
       
    }

    return 0;
}