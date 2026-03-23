#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;

    pq.push(10);
    pq.push(5);
    pq.push(20);

    cout << pq.top() << endl; // 20 (highest priority)

    pq.pop(); // removes 20

    cout << pq.top() << endl; // 10

    return 0;
}