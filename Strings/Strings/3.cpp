

#include <bits/stdc++.h>
using namespace std;

int main() {
    // given a string s, check if it is palindrome or not
    
   string s="akkaf";
   int n =s.size();
   int flag=0;
   
   for(int i=0;i<=n/2;i++){
       
       if(s[i]!=s[n-1-i]){
           flag++;
           break;
       }
   }
   
   if(!flag){
       cout<<"palindrome";
   } 
   else {
       cout<<"not palindrome";
   }
}

//TC : O(n)
// sp : O(1)
