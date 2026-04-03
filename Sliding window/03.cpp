// Using array
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int lastIndex[128];  // ASCII characters
    fill(begin(lastIndex), end(lastIndex), -1); // initialize all to -1

    int left = 0, maxLength = 0;

    for (int right = 0; right < s.size(); right++) {
        char c = s[right];
        
        

        // if character was seen, move left pointer
        if (lastIndex[c] >= left) {
            left = lastIndex[c] + 1;
        }

        lastIndex[c] = right; // update last seen index
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s); // Output: 3
    return 0;
}

// O(n) where n = s.size()
// O(1) (constant space)