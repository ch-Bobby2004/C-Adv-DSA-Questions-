// Reversing a queue:
// given a queue a[], reverse the queue so that the front element becomes the rear ad the rear element  becomes the front , while preserving the order of the remaining element accordingly
// you can use extra space

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int> &q) {
    stack<int> s;

    // Step 1: Move all elements from queue to stack
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Move back from stack to queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    reverseQueue(q);

    // Print reversed queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}


// Time Complexity

// O(n)
// Each element is moved twice (queue → stack → queue).

// Space Complexity

// O(n) (extra stack space)