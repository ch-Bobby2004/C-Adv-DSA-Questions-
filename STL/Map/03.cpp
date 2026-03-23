#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> m;

    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Mango";

    for (auto x : m) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}

// Keys are unique ✅
// No order (random arrangement) ❌
// Very fast operations → O(1) average
// Implemented using hashing