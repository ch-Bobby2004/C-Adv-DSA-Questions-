/*
Interleaving Queue Halves


Given a queue q[] of even size. Rearrange the elements by interleaving the first half with the second half.

Note: Interleaving means take one element from the first half, then one element from the second half, then the next element from the first half, then the next element from the second half, and continue this process until the queue is fully rearranged.

Input: q[] = [2, 4, 3, 1]
Output: [2, 3, 4, 1]
Explanation: We place the first element of the first half 2 and after that place the first element of second half 3 and after that repeat the same process one more time so the resulting queue will be [2, 3, 4, 1]

Input: q[] = [3, 5]
Output: [3, 5]
Explanation: We place the first element of the first half 3 and first element of the second half 5 so the resulting queue is [3, 5]

1- Can use extra space.
*/


#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void interleaveQueue(queue<int>& q) {
    if (q.size() % 2 != 0) {
        cout << "Queue size must be even." << endl;
        return;
    }

    int n = q.size();
    int half = n / 2;
    stack<int> s;

    // Step 1: Push first half into stack
    for (int i = 0; i < half; i++) {
        s.push(q.front());
        q.pop();
    }
    // 2 4

    // Step 2: Enqueue back stack elements
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
    // 3 1 4 2

    // Step 3: Move the first half to the back
    for (int i = 0; i < half; i++) {
        q.push(q.front());
        q.pop();
    }
    // 4 2 3 1

    // Step 4: Push first half into stack again
    for (int i = 0; i < half; i++) {
        s.push(q.front());
        q.pop();
    }
    // 3 1     4 2

    // Step 5: Interleave stack and queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
        q.push(q.front());
        q.pop();
    }
    //  2  3 4 1
    
}

// Helper function to print queue
void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(3);
    q.push(1);

    cout << "Original Queue: ";
    printQueue(q);

    interleaveQueue(q);

    cout << "Interleaved Queue: ";
    printQueue(q);

    return 0;
}
