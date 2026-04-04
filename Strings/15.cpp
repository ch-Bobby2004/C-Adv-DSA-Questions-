



#include <bits/stdc++.h>
using namespace std;
int main() {
    string text = "cbaefdfhubabacd";
    string pattern = "abc";

    int n = text.length();
    int m = pattern.length();
    int count = 0;

    int freq[26]= {0};

    for (int i =0; i< m; i++) {
        freq[pattern[i] - 'a']++;
    }

    for (int i = 0; i <n ; i++) {
        int Freq2[26] = {0};

        for (int j = 0; j < m; j++) {
            Freq2[text[i + j] - 'a']++;
        }
        bool anagram = true;
        for (int k= 0; k < 26; k++) {
            if (freq[k] != Freq2[k]) {
                anagram= false;
                break;
            }
        }

        if (anagram) {
            count++;
        }
    }

    cout << count;

    return 0;
}
