#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    // Insert
    m[1] = "Apple";
    m[2] = "Banana";
    m.insert({3, "Mango"});

    // Find
    if (m.find(2) != m.end())
        cout << "Key 2 found\n";

    // Erase
    m.erase(1);

    // Traverse
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}