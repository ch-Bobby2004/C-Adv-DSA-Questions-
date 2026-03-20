// What is a stack?

// A stack is a Last-In-First-Out (LIFO) data structure
// You can only access the top element
// Think of a stack of plates: you add/remove from the top only


#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;  // create an empty stack
}


#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    // Add elements
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl;  // 30

    // Remove top
    st.pop();
    cout << "After pop, top element: " << st.top() << endl;  // 20

    // Size & empty
    cout << "Size: " << st.size() << endl;  // 2
    cout << "Is empty? " << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}