// reverse every word in a string
#include <iostream>
#include <string>
using namespace std;

string reverseWords(string s) {
    int n = s.size();
    int start = 0;

    for (int i = 0; i <= n; i++) {
        // If we reach a space or end of string, reverse the word
        if (i == n || s[i] == ' ') {
            int left = start, right = i - 1;
            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
            start = i + 1; // Move to next word
        }
    }

    return s;
}

int main() {
    string str = "Hello World ";
    string reversed = reverseWords(str);
    cout << reversed << endl; // olleH dlroW 
}