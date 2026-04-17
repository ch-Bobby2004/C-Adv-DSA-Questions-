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
    
    q.front()=1;
    q.back()=2;
    
    cout << "Front: " << q.front() << endl; // 10
    cout << "Back: " << q.back() << endl;   // 30
    
    

    return 0;
}
