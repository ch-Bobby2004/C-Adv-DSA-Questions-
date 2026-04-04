// given a string s, the task is to reverse the string. reversing a string mean rearranging the characters such that the first character become the last, the second character become second last and so on

//part 1 you can use extra space
#include <bits/stdc++.h>
using namespace std;


int main() {
    string str1 ="Bobby";
    int n=str1.size();
    string str2 = "";
    for (int i=n-1;i>=0;i--){
            str2+=str1[i];
    }
    cout<<str1 <<endl;
    cout<<str2 <<endl;
   
}


//TC : O(n)
// Space Complexity = O(n)


