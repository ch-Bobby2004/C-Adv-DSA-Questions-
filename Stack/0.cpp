#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s; // create a stack of integers

    // push elements
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // 30

    // pop element
    s.pop();
    cout << "Top after pop: " << s.top() << endl; // 20

    // check size
    cout << "Stack size: " << s.size() << endl; // 2

    // check if empty
    if(s.empty()) cout << "Stack is empty\n";
    else cout << "Stack is not empty\n";

    return 0;
}


// No searching
//  No shifting
//  No traversal

// That is why stack operations are usually O(1) (constant time).
