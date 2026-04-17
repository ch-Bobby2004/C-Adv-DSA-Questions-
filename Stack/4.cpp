#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<string> s;   // stack that stores strings

    s.push("Apple");
    s.push("Banana");
    s.push("Mango");

    cout << "Top element: " << s.top() << endl;

    s.pop();

    cout << "After pop: " << s.top() << endl;
    cout << "After pop: " << s.size() << endl;
}
