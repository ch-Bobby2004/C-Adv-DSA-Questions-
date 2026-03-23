#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // Declare an unordered_set
    unordered_set<int> us;

    //  Insert elements
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(10); // duplicate ignored

    cout << "Unordered set after insertion: ";
    for (auto x : us) cout << x << " ";
    cout << endl;

    //  Size of unordered set
    cout << "Size: " << us.size() << endl;

    // Check if empty
    cout << "Is empty? " << (us.empty() ? "Yes" : "No") << endl;

    // Find an element
    int key = 20;
    auto it = us.find(key);
    if (it != us.end())
        cout << key << " is found in unordered set" << endl;
    else
        cout << key << " not found" << endl;

    //  Count elements (0 or 1)
    cout << "Count of 30: " << us.count(30) << endl;
    cout << "Count of 40: " << us.count(40) << endl;

    //  Erase elements by value
    us.erase(10);
    cout << "After erasing 10: ";
    for (auto x : us) cout << x << " ";
    cout << endl;

    //  Erase elements using iterator
    it = us.find(20);
    if(it != us.end()) us.erase(it);
    cout << "After erasing 20 using iterator: ";
    for (auto x : us) cout << x << " ";
    cout << endl;

    //  Clear the set
    us.clear();
    cout << "Size after clear: " << us.size() << endl;

    return 0;
}