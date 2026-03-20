// What is a deque?

// deque = Double-Ended Queue
// Like a vector, but you can add or remove elements at both ends efficiently.
// Stored in contiguous memory blocks, but not strictly one continuous block like vector


#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);

    for(auto x : dq) cout << x << " ";

    cout << "\nFront: " << dq.front();
    cout << "\nBack: " << dq.back();

    return 0;
}