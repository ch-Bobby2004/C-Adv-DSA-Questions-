#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> m;

    // Insert
    m[1] = "Apple";
    m[2] = "Banana";
    m.insert({3, "Mango"});

    // Find
    if (m.find(2) != m.end())
        cout << "Key 2 found\n";

    // Count
    cout << "Count of key 3: " << m.count(3) << endl;

    // Erase
    m.erase(1);

    // Traverse
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    // Clear
    m.clear();

    cout << "Size after clear: " << m.size();

    return 0;
}