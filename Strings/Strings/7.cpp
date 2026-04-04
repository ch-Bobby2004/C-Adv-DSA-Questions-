#include <iostream>
using namespace std;

int main() {

    string s = "swiss";

    int freq[26] = {0};

    int n = s.length();

    // Step 1: Count frequency
    for(int i=0; i<n; i++){
        freq[s[i] - 'a']++;
    }

    // Step 2: Find first non-repeating
    for(int i=0; i<n; i++){
        if(freq[s[i] - 'a'] == 1){
            cout<<s[i];
            return 0;
        }
    }

    cout<<"Invalid";

    return 0;
}

// Tc  O(n)

// Size is fixed (26 letters).

// No matter how large n becomes, array size remains 26.

// 👉 Constant space

// O(1)