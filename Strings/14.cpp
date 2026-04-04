#include <bits/stdc++.h>
using namespace std;

/*

Count Occurrences of Anagrams

Given a word pattern and a string text consisting of lowercase characters, the task is to return the count of substrings in text which are anagrams of the pattern.

Examples: 

Input : text = "forxxorfxdofr", pattern = "for"
Output : 3
Explanation : Anagrams present are for, orf and ofr. Each appears in the text once and hence the count is 3.

Input : text = "aabaabaa", pattern = "aaba"
Output : 4
Explanation : Anagrams present are aaba and abaa. Each appears twice in the text and hence the count is 4.

*/


int main()
{
    string text = "aabaabaa", pattern = "aaba";
    
    int n = text.size();
    sort(pattern.begin(), pattern.end());
    int c = 0;
    
    // cout << pattern << endl;
    
    for(int i =0; i<n; i++)
    {
        string sub = "";
        
        for(int j=i; j<n; j++)
        {
            sub = sub + text[j];
            
            sort(sub.begin(), sub.end());
            
            if(sub == pattern)
            {
                c++;
            }
        }
    }
    
    cout << c << endl;
    
}

