// Longest Substring Without Repeating Characters
// Given a string s, find the length of the longest substring without repeating characters

// Use two pointers (left and right) to represent the window.
// Use a hash map (or array) to store the last index of each character.
// Move right forward:
// If the character is repeated, move left to last_seen + 1.
// Track the maximum window size.


// (Using Set)

#include <iostream>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> window;
    int left = 0, maxLength = 0;

    for (int right = 0; right < s.length(); right++) {
        // If duplicate, shrink window
        while (window.count(s[right])) {
            window.erase(s[left]);
            left++;
        }

        // Add current character
        window.insert(s[right]);

        // Update max length
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);
    return 0;
}

// ime Complexity
// Each character is inserted once and removed once → O(n)
// Checking set.count() → average O(1) with unordered_set
// Total: O(n)
//  Space Complexity
// window stores at most all unique characters in the substring
// Worst case → all distinct characters in s → O(min(n, charset))
// For ASCII → O(26) ≈ O(1) practically
// For general Unicode → O(n)