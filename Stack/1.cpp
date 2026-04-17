#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Double-Ended Queue
    deque<int> d = {1,2,3};
    stack<int> s(d); // create a stack of integers

    // push elements
    // s.push(10);
    // s.push(20);
    // s.push(30);

    cout << "Top element: " << s.top() << endl; // 30

    // pop element
    s.pop();  
    cout << "Top after pop: " << s.top() << endl; // 20

    // check size
    cout << "Stack size: " << s.size() << endl; // 2

    // check if empty if empty than return 1 if not empty than 0
    if(s.empty()) cout << "Stack is empty\n";
    else cout << "Stack is not empty\n";

    return 0;
}
