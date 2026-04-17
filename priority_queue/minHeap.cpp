#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);

    cout << "Top element (Min): " << minHeap.top() << endl; // 10

    return 0;
}
