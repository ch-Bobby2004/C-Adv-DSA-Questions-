#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10); // duplicate ignored

    // Iterate and print
    for (auto x : s) {
        cout << x << " ";
    }

    return 0;
}



// Definition:

// An ordered set stores elements in sorted order (ascending by default) and ensures uniqueness (except multiset which allows duplicates).

// Implemented using balanced BST (like Red-Black Tree)
// Operations like insert, erase, find → O(log n)