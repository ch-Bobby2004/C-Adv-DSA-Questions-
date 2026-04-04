/*
Sentence Palindrome

Given a sentence s, determine whether it is a palindrome sentence or not. A palindrome sentence is a sequence of characters that reads the same forward and backward after:

Converting all uppercase letters to lowercase.
Removing all non-alphanumeric characters (i.e., ignore spaces, punctuation, and symbols).
Examples: 

Input: s = "Too hot to hoot."
Output: true
Explanation: If we remove all non-alphanumeric characters and convert all uppercase letters to lowercase, string s will become "toohottohoot" which is a palindrome.

Input: s = "Abc 012..##  10cbA"
Output: true
Explanation: If we remove all non-alphanumeric characters and convert all uppercase letters to lowercase, string s will become "abc01210cba" which is a palindrome.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "A man, a plan, a canal: Panama";

    int left = 0;
    int right = s.length() - 1;

    while(left < right) {

        // Skip non-alphanumeric from left
        if(!isalnum(s[left])) {
            left++;
            continue;
        }

        // Skip non-alphanumeric from right
        if(!isalnum(s[right])) {
            right--;
            continue;
        }

        // Compare lowercase characters
        if(tolower(s[left]) != tolower(s[right])) {
            cout << "Not Palindrome";
            return 0;
        }

        left++;
        right--;
    }

    cout << "Palindrome";

    return 0;
}

// isalnum()	Checks if character is letter or number
// tolower()	Converts uppercase to lowercase


// TC O(n)