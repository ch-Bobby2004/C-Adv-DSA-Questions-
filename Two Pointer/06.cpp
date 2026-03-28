#include <iostream>
using namespace std;

bool isPalindrome(string str) {
    int left = 0, right = str.length() - 1;

    while (left < right) {
        if (tolower(str[left]) != tolower(str[right]))
            return false;
        left++;
        right--;
    }
    return true;
}


int main() {
    string str = "madam";

    if (isPalindrome(str))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}