#include <iostream>
#include <string>
using namespace std;

int maxDepth(string s) {
    int currentDepth = 0;
    int maxDepth = 0;

    for (char ch : s) {
        if (ch == '(') {
            currentDepth++;
            maxDepth = max(maxDepth, currentDepth);
        }
        else if (ch == ')') {
            currentDepth--;
        }

        // Optional: Check for invalid parentheses
        if (currentDepth < 0)
            return -1;  // Unbalanced
    }

    if (currentDepth != 0)
        return -1;  // Unbalanced

    return maxDepth;
}

int main() {
    string s = "( p((q)) ((s)t) )";
    cout << "Maximum Depth: " << maxDepth(s);
    return 0;
}

// Time Complexity: O(n)

// Space Complexity: O(1)
