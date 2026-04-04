// find the first non-repeating character in the given string.
// you are given a string of lowercae characters, you need to find the first non-repeating character. if all the characters are repeating, then print "Invalid" on th screen 


#include <iostream>
using namespace std;
      
int main() {

    string s = "mbaam";
   
    int n= s.size();
    
    for(int i=0;i<n;i++){
         int count =0 ;

        for(int j=0 ;j<n;j++){
            
            if( i!=j && s[i]==s[j]){
                count++;
                break;
            }
            
        }
            if (count == 0) {
            cout << s[i];
            return 0;
        }
        
    }
    
    
      
        cout<<"Invalid";
      

}


// burate code
// Tc: o(n^2)
//sc:O(1)