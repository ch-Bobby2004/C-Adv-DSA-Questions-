// function to find the maximum occurring character in a string

#include <iostream>
#include <string>
#include <vector>
using namespace std;

char maxOccurringChar(const string& s) {
    vector<int> freq(256, 0); // Frequency array for all ASCII characters

    // Count frequency of each character
    for (char c : s) {
        freq[(int)c]++;
    }

    int maxFreq = 0;
    char result = '\0';

    // Find the character with maximum frequency
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = (char)i;
        }
    }

    return result;
}

int main() {
    string str = "hello world";
    cout << "Maximum occurring character: " << maxOccurringChar(str) << endl;
}