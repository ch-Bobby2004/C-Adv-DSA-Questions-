#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);

    cout << "Top element (Max): " << maxHeap.top() << endl; // 30

    maxHeap.pop();
    cout << "After pop: " << maxHeap.top() << endl; // 20

    return 0;
}