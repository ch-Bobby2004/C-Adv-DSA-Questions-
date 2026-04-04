#include <bits/stdc++.h>
using namespace std;
// given a string s, check if it is palindrome or not
int main() {
    string s ="racecar";
    int n=s.size();
    string s1 = "";
    for (int i=n-1;i>=0;i--){
            s1+=s[i];
    }
    if(s==s1){
        cout<<"pallindrome"<<endl;
    }
    else{
        cout<<"not pallindrome"<<endl;
    }
    cout<<s1<<"";
}

//TC : O(n)
// sp : O(n)