// Count substring with equal number of 0s, and 1s, and 2s
// given a string that consists of only 0s, 1s and 2s , count the number of substring that have an equal number of 0s,1s,and 2s.
// input : str = "0102010
// output : 2
// 102 and 201

#include <iostream>
using namespace std;

int countSubstrings(string s) {

    int n = s.length();
    int ans = 0;

    // pick starting index
    for(int i = 0; i < n; i++) {

        int c0 = 0, c1 = 0, c2 = 0;

        // pick ending index
        for(int j = i; j < n; j++) {

            if(s[j] == '0') c0++;
            else if(s[j] == '1') c1++;
            else c2++;

            // check equality
            if(c0 == c1 && c1 == c2) {
                ans++;
            }
        }
    }

    return ans;
}

int main() {

    // string s = "0102010";
    string s = "01020210";
    // 102  , 210,  021,  102021
    cout << countSubstrings(s);

}

