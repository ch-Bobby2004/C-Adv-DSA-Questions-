#include <iostream>
#include <stack>
using namespace std;
//print pop element

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Popped element: " << s.top() << endl; // read
    s.pop(); // remove
}
