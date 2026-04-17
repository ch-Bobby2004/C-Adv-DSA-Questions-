#include <iostream>
using namespace std;

bool backspaceCompare(string s1, string s2) {

    int i = s1.length() - 1;
    int j = s2.length() - 1;

    int skip1 = 0, skip2 = 0;

    while (i >= 0 || j >= 0) {

        // Process s1
        while (i >= 0) {
            if (s1[i] == '#') {
                skip1++;
                i--;
            }
            else if (skip1 > 0) {
                skip1--;
                i--;
            }
            else {
                break;
            }
        }

        // Process s2
        while (j >= 0) {
            if (s2[j] == '#') {
                skip2++;
                j--;
            }
            else if (skip2 > 0) {
                skip2--;
                j--;
            }
            else {
                break;
            }
        }

        // Compare current characters
        if (i >= 0 && j >= 0) {
            if (s1[i] != s2[j])
                return false;
        }
        else {
            if (i >= 0 || j >= 0)
                return false;
        }

        i--;
        j--;
    }

    return true;
}

int main() {

    string s1 = "equ#al";
    string s2 = "e#qu#al";

    if (backspaceCompare(s1, s2))
        cout << "Equal";
    else
        cout << "Not Equal";

    return 0;
}

//TC O(n + m)
// sp O(1)