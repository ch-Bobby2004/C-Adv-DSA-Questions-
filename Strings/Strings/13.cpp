#include <iostream>
using namespace std;

int main()
{
    // string s = "hellodfjaoh fadjfd";
    string s = "abcdefghi jklm nopqrstuvwxyz";

    int freq[26] = {0};

    for(int i=0;i<s.size();i++){
        freq[s[i]-'a'] = 1; 
    }

    for(int i=0;i<26;i++){
        if(freq[i] == 0){
            cout<<"not pangram";
            return 0;
        }
    }

    cout<<"pangram";
}
