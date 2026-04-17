#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> q;

    if(q.empty()) {
        cout <<q.empty()<< " Queue is empty\n" ;
    }

    q.push(10);
    q.push(20);

    while(!q.empty()) {   // loop until queue becomes empty
        cout << q.front() << " ";
        q.pop();
    }
}
