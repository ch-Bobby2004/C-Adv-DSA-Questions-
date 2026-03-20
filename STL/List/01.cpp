// What is list in C++?
// list = doubly linked list in STL
// Each element (node) stores:
// The value
// Pointer to the previous node
// Pointer to the next node
// Dynamic size — grows/shrinks at runtime
// Efficient insertion/deletion anywhere (O(1)), but no random access (O(n))




#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst = {10, 20, 30};

    lst.push_front(5);
    lst.push_back(40);

    cout << "List elements: ";
    for(auto x : lst) cout << x << " ";
    cout << "\n";

    // Insert 15 before 2nd element
    auto it = lst.begin();
    advance(it, 2);          // move 2 steps forward
    lst.insert(it, 15);

    cout << "After insert: ";
    for(auto x : lst) cout << x << " ";
    cout << "\n";

    // Remove front and back
    lst.pop_front();
    lst.pop_back();

    cout << "After pop front/back: ";
    for(auto x : lst) cout << x << " ";
    cout << "\n";

    return 0;
}




// #include <iterator>

// advance(iterator, n);

// iterator → the iterator you want to move

// n → number of positions to move

// Positive n → move forward

// Negative n → move backward (for bidirectional iterators like list)

// Why use advance() with list?

// list does not support random access

// Cannot do lst[2]

// So you use an iterator + advance() to reach a specific position

// For vector or deque, you could also do: