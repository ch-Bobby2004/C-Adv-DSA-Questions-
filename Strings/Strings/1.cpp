
#include <bits/stdc++.h>
using namespace std;

int main() {
    // given a string print all character that are present at even indices (starting from 0) print them in same order as ther are apper in the given string

    string s = "Bobby";
    int len = s.size();
    int len1 = s.length();
    cout<< len << endl;  //5
    cout<< len1 << endl;  //5


// for(int i=0;i<len;i++){
//     if(i%2==0){
//         cout<<s[i]<<" ";
//     }
    
// }
// for(int i=0;i<s.length();i+=2){
   
//         cout<<s[i]<<" ";
    
    
// }

cout << endl << endl;

for(char ch : s){
    cout<<ch<<" ";
}
    

}