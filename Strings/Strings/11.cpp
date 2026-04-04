#include <iostream>
using namespace std;

int main()
{
    string s1 = "listen";
    string s2 = "silent";

    // Step 0: Length check
    if(s1.length() != s2.length()){
        cout<<"Not Anagram";
        return 0;
    }

    int freq[26] = {0};

    // Count s1
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;
        // freq[s1[i]-97]++;
    }

    // Subtract s2
    for(int i=0;i<s2.length();i++){
        freq[s2[i]-'a']--;
    }

    // Check array
    for(int i=0;i<26;i++){
        if(freq[i] != 0){
            cout<<"Not Anagram";
            return 0;
        }
    }

    cout<<"Anagram";
}
//O(n)
