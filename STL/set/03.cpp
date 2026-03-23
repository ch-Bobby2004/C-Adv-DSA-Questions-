#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;

    s.insert(20);
    s.insert(10);
    s.insert(30);
    s.insert(30);
    s.insert(49);

    for(auto x : s)
        cout << x << " "; // No guaranteed order

    return 0;
}


// An unordered set stores elements without any specific order.

// Implemented using hash tables
// Average complexity for insert, erase, find → O(1)
// Worst-case → O(n) if hash collisions occur