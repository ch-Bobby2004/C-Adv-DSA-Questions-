#include <iostream>
using namespace std;

int main() {
    string s="abababa";
    string s1="aba";
    string s2="a";
    int n=s.length();
    int n1=s1.length();
    int n2=s2.length();
    string result="";
    int i=0;
    while(i<n) {
        if (s.substr(i,n1)==s1) {
            result=result+s2;
            i=i+n1;
        }
        else {
            result=result+s[i];
            i++;
        }
    }
    cout<<result;
    return 0;
}

// Tc O(n*n1)
