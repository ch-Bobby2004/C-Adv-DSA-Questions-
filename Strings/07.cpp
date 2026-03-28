#include <iostream>
#include <string>
using namespace std;

char maxOccurringAlphabet(const string& s) {
    int freq[26] = {0}; // Frequency for 'a' to 'z'

    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);       // Convert to lowercase
            freq[c - 'a']++;      // Map 'a'-'z' to 0-25
        }
    }

    int maxFreq = 0;
    char result ='a';

    for (int i = 0; i < 26; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = 'a' + i;
        }
    }

    return result;
}

int main() {
    string str = "Hello World!";
    cout << "Maximum occurring alphabet: " << maxOccurringAlphabet(str) << endl;
}