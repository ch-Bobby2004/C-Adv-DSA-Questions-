// unordered_map<char, int> freq;
// This is NOT an array.

// It is a Hash Table (special data structure).

// This is called template parameters.

// It means:

// unordered_map<KEY_TYPE, VALUE_TYPE>


// Key → char
// Value → int

// So it stores:

// 'a' → 3
// 'b' → 1
// 'c' → 7



   	// unordered_map
	// Dynamic
	// Any key type
	// Hash-based







// 2️⃣ Find the first non-repeating character in a string.
// Example: "aabbcdeff" → c



    #include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s = "aabbcdeff";
    unordered_map<char, int> freq;

    for(char c : s){
        freq[c]++;
    }

    for(char c : s){
        if(freq[c] == 1){
            cout << c;
            return 0;
        }
    }

    cout << "No non-repeating character";
}
