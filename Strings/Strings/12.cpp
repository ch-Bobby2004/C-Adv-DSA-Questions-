// check if the given two strings are pangram or not
// given string s the task to check if it is pangram or not
// a pangram is a sentence containing all lowercase letters of the english alphabet

#include <iostream>
using namespace std;


int main() {
    string s = "hello";

    bool isPangram = true; 

    
    for (char c = 'a'; c <= 'z'; c++) {
        bool flag = false;

        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == c) {
                flag = true;
                break; 
            }
        }

        if (!flag) {
            isPangram = false; 
            break;
        }
    }

    if (isPangram) {
        cout << "Pangram";
    } else {
        cout << "Not Pangram";
    }

    return 0;
}

// O(26*n)