#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<string> supportQueue;

    // Customers enter the queue
    supportQueue.push("ch");
    supportQueue.push("Bob");
    supportQueue.push("jk");
    supportQueue.push("yk");

    cout << "Total customers waiting: " 
         << supportQueue.size() << endl;

    // Serving customers
    while(!supportQueue.empty()) {
        cout << "Serving: " << supportQueue.front() << endl;

        supportQueue.pop(); // remove served customer
    }

    cout << "All customers served!" << endl;

    return 0;
}
