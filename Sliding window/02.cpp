

// Using Map
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

// Time Complexity
// Each character is visited once → O(n)
// Map access → average O(1) for unordered_map
// Total: O(n)

// Advantage: We avoid shrinking one by one, so it can be slightly faster in practice.

//  Space Complexity
// unordered_map stores last index of all unique characters
// Worst case → O(min(n, charset))
// ASCII → O(26) (practically constant)
// Unicode → up to O(n)

