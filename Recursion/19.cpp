// Check Palindrome using Recursion

#include <iostream>
using namespace std;

bool isPalindrome(string str, int left, int right) {
    // Base case: all characters checked
    if (left >= right)
        return true;

    // If mismatch found
    if (str[left] != str[right])
        return false;

    // Recursive call: move towards center
    return isPalindrome(str, left + 1, right - 1);
}

int main() {
    string str = "madam";

    if (isPalindrome(str, 0, str.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not a Palindrome";

    return 0;
}