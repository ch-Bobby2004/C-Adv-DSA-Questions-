#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;

    // Insert elements
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);

    cout << "Size: " << pq.size() << endl;

    // Access top element
    cout << "Top element: " << pq.top() << endl;

    // Remove elements
    cout << "Elements: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}



// It maintains a heap structure
// Only guarantees that:
// 👉 top() is always the smallest element

// But that's because you're removing elements one by one, not because they were stored sorted.