/*

Count substrings with k distinct characters

Given a string s consisting of only lowercase English letters and an integer k, count the total number of substrings (not necessarily distinct) of s that contain exactly k distinct characters.
Note:

A substring is a contiguous sequence of characters within a string.
Substrings that are identical but occur at different positions should each be counted separately.

Examples: 

Input: s = "abc", k = 2
Output: 2
Explanation: Possible substrings are ["ab", "bc"]

Input: s = "aba", k = 2
Output: 3
Explanation: Possible substrings are ["ab", "ba", "aba"]

Input: s = "aa", k = 1
Output: 3
Explanation: Possible substrings are ["a", "a", "aa"]


1 - Brute Force: TC: O(n^2), SC: O(1)
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "aa";
    int n = s.size();
    // cout << n << endl;
    int c = 0, distinct = 0;
    int k =1;
    
    for(int i=0; i < n ; i++)
    {
        unordered_map <int, int> m;
        for(int i=0; i<26; i++)    
        {
            m[i] = 0;
        }
        
        distinct = 0;
        
        for(int j = i; j<n ; j++)
        {
            if(m[s[j]-'a'] == 0)
            {
                m[s[j] - 'a'] = 1;
                distinct++;
                // cout << distinct<<endl;
            }
            
            if(distinct == k)
            {
                c++;
                // cout << c << endl;
            }
        }
        
    }
    
    cout << c << endl;
}


