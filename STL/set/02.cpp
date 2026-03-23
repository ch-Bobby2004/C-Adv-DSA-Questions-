#include <iostream>
#include <set>
using namespace std;

int main() {
    //  Declare an ordered set
    set<int> s;

    // Insert elements
    s.insert(50);
    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(30); // duplicate ignored

    cout << "Set after insertion: ";
    for (auto x : s) cout << x << " ";
    cout << endl;

    //  Size of set
    cout << "Size of set: " << s.size() << endl;

    //  Check if empty
    cout << "Is set empty? " << (s.empty() ? "Yes" : "No") << endl;

    //  Find an element
    int key = 30;
    if (s.find(key) != s.end())
        cout << key << " is found in the set" << endl;
    else
        cout << key << " not found" << endl;

    // Count (returns 0 or 1 for set)
    cout << "Count of 30: " << s.count(30) << endl;
    cout << "Count of 40: " << s.count(40) << endl;

    //Erase elements
    s.erase(20); // erase by value
    cout << "Set after erasing 20: ";
    for (auto x : s) cout << x << " ";
    cout << endl;

    // Erase using iterator
    auto it = s.find(50);
    if(it != s.end()) s.erase(it);
    cout << "Set after erasing 50 using iterator: ";
    for (auto x : s) cout << x << " ";
    cout << endl;

    // Lower bound and Upper bound
    s.insert(25);
    cout << "Lower bound of 25: " << *s.lower_bound(25) << endl; // ≥ 25
    cout << "Upper bound of 25: " << *s.upper_bound(25) << endl; // > 25

    //  Clear the set
    s.clear();
    cout << "Size after clear: " << s.size() << endl;

    return 0;
}