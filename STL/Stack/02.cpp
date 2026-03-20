#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Create a stack
    stack<int> st;
    cout << "Stack created. Is empty? " << (st.empty() ? "Yes" : "No") << "\n";

    //  Push elements
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "After push(10,20,30), top element: " << st.top() << "\n";
    cout << "Size: " << st.size() << "\n";

    // Pop element
    st.pop();
    cout << "After pop(), top element: " << st.top() << "\n";
    cout << "Size: " << st.size() << "\n";

    // Push more elements
    st.push(40);
    st.push(50);
    cout << "After push(40,50), top element: " << st.top() << "\n";
    cout << "Size: " << st.size() << "\n";

    // Access top element
    cout << "Current top element: " << st.top() << "\n";

    // 6Pop all elements
    while(!st.empty()) {
        cout << "Popping: " << st.top() << "\n";
        st.pop();
    }

    cout << "After popping all, is empty? " << (st.empty() ? "Yes" : "No") << "\n";

    return 0;
}