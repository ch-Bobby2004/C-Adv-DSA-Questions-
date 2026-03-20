#include <iostream>
#include <deque>
#include <algorithm> // for sort, reverse
using namespace std;

int main() {
    //  Create a deque
    deque<int> dq = {10, 20, 30};
    cout << "Initial deque: ";
    for(auto x : dq) cout << x << " ";
    cout << "\n";

    //  Add elements
    dq.push_back(40);    // add at end
    dq.push_front(5);    // add at front
    cout << "After push_front & push_back: ";
    for(auto x : dq) cout << x << " ";
    cout << "\n";

    // Access elements
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;
    cout << "Element at index 2: " << dq.at(2) << endl;

    //  Remove elements
    dq.pop_back();       // remove last
    dq.pop_front();      // remove first
    cout << "After pop_front & pop_back: ";
    for(auto x : dq) cout << x << " ";
    cout << "\n";

    //  Check size & empty
    cout << "Size: " << dq.size() << endl;
    cout << "Is empty? " << (dq.empty() ? "Yes" : "No") << endl;

    //  Insert at specific position
    dq.insert(dq.begin() + 1, 15);  // insert 15 at index 1
    cout << "After insert at index 1: ";
    for(auto x : dq) cout << x << " ";
    cout << "\n";

    // Erase element at specific position
    dq.erase(dq.begin() + 2);      // remove element at index 2
    cout << "After erase at index 2: ";
    for(auto x : dq) cout << x << " ";
    cout << "\n";

    // Resize deque
    dq.resize(5, 100);             // size=5, fill new elements with 100
    cout << "After resize to 5: ";
    for(auto x : dq) cout << x << " ";
    cout << "\n";

    //  Clear deque
    dq.clear();
    cout << "After clear, size: " << dq.size() << ", empty? " << (dq.empty() ? "Yes" : "No") << "\n";

    //  Reuse deque with assign
    dq.assign(4, 7); // 4 elements, all 7
    cout << "After assign 4 elements of 7: ";
    for(auto x : dq) cout << x << " ";
    cout << "\n";

    //  Sort & Reverse
    dq.push_back(3);
    dq.push_back(10);
    sort(dq.begin(), dq.end());
    cout << "After sort: ";
    for(auto x : dq) cout << x << " ";
    cout << "\n";

    reverse(dq.begin(), dq.end());
    cout << "After reverse: ";
    for(auto x : dq) cout << x << " ";
    cout << "\n";

    return 0;
}