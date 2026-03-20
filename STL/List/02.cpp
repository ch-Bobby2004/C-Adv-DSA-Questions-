#include <iostream>
#include <list>
#include <iterator> // for advance
#include <algorithm> // for sort, reverse
using namespace std;

int main() {
    //  Create a list
    list<int> lst = {10, 20, 30};
    cout << "Initial list: ";
    for(auto x : lst) cout << x << " ";
    cout << "\n";

    // Add elements
    lst.push_front(5);   // add at front
    lst.push_back(40);   // add at back
    cout << "After push_front & push_back: ";
    for(auto x : lst) cout << x << " ";
    cout << "\n";

    //  Access elements
    cout << "Front: " << lst.front() << ", Back: " << lst.back() << endl;

    //  Insert at specific position
    auto it = lst.begin();
    advance(it, 2); // move to 3rd position
    lst.insert(it, 15); // insert 15 before 3rd element
    cout << "After insert at index 2: ";
    for(auto x : lst) cout << x << " ";
    cout << "\n";

    //  Erase at specific position
    it = lst.begin();
    advance(it, 3); // move to 4th element
    lst.erase(it);
    cout << "After erase at index 3: ";
    for(auto x : lst) cout << x << " ";
    cout << "\n";

    // Remove specific value(s)
    lst.remove(20); // removes all elements with value 20
    cout << "After remove(20): ";
    for(auto x : lst) cout << x << " ";
    cout << "\n";

    //  Resize list
    lst.resize(6, 100); // make size 6, fill new elements with 100
    cout << "After resize to 6: ";
    for(auto x : lst) cout << x << " ";
    cout << "\n";

    // Sort and reverse
    lst.sort();        // ascending
    cout << "After sort: ";
    for(auto x : lst) cout << x << " ";
    cout << "\n";

    lst.reverse();     // reverse
    cout << "After reverse: ";
    for(auto x : lst) cout << x << " ";
    cout << "\n";

    // Pop front/back
    lst.pop_front();
    lst.pop_back();
    cout << "After pop_front & pop_back: ";
    for(auto x : lst) cout << x << " ";
    cout << "\n";

    //Check size and empty
    cout << "Size: " << lst.size() << ", Is empty? " << (lst.empty() ? "Yes" : "No") << "\n";

    // Clear the list
    lst.clear();
    cout << "After clear, size: " << lst.size() << ", Is empty? " << (lst.empty() ? "Yes" : "No") << "\n";

    return 0;
}