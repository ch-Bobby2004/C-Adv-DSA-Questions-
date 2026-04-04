// check if the given two strings are anagrams of each other
// given two non-empty strings s1 and s2 of lowercase letter , determine if the are anagrams
// eg= if they contain the same character with the same frequencies

#include <iostream>
using namespace std;

int main()
{
    string s1 = "listen";
    string s2 = "silent";

    if(s1.length() != s2.length()){
        cout<<"Not Anagram";
        return 0;
    }

    int n = s1.length();

    // check every character of s1
    for(int i=0;i<n;i++){

        bool found = false;

        for(int j=0;j<n;j++){

            if(s1[i] == s2[j]){
                found = true;

                // mark character as used
                s2[j] = '#';
                break;
            }
        }

        if(!found){
            cout<<"Not Anagram";
            return 0;
        }
    }

    cout<<"Anagram";
}

//O(n^2)
