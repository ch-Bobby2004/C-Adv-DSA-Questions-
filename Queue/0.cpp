#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> q; // create queue

    q.push(10);  // insert
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // 10
    cout << "Back: " << q.back() << endl;   // 30

    q.pop(); // removes 10

    cout << "Front after pop: " << q.front() << endl; // 20

    cout << "Size: " << q.size() << endl; // 2

    return 0;
}


// push() → O(1)

// pop() → O(1)

// front() → O(1)

// back() → O(1