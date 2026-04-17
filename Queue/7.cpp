// Reversing a queue:
// given a queue a[], reverse the queue so that the front element becomes the rear ad the rear element  becomes the front , while preserving the order of the remaining element accordingly
// without using stack

#include <iostream>
#include <queue>
using namespace std;

void reverseQueue(queue<int> &q) {
    // Base case
    if (q.empty())
        return;

    // Step 1: Remove front element
    int frontElement = q.front();
    q.pop();

    // Step 2: Reverse remaining queue
    reverseQueue(q);

    // Step 3: Insert removed element at rear
    q.push(frontElement);
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

// Time Complexity: O(n)

// Space Complexity: O(n) (due to recursion call stack)
