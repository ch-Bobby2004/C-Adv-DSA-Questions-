// Keys are unique ✅
// Elements are stored in sorted order (by key) ✅
// Implemented using Red-Black Tree
// Operations take O(log n) time

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    m[1] = "Apple";
    m[2] = "Banana";
    m[5] = "Orange";
    m[3] = "Mango";

    for (auto x : m) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}