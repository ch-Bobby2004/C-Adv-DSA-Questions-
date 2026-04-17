// Reverse  a string using stack
// given a string str, the task is revese it using stack.
// you an use another string
#include <iostream>
#include <stack>
using namespace std;

int main() {

    string str = "HELLO";
    stack<char> st;

    // push all characters
    for(char ch : str) {
        st.push(ch);
    }

    string reversed = "";

    // pop and build reversed string
    while(!st.empty()) {
        reversed += st.top();
        st.pop();
    }

    cout << "Reversed string: " << reversed;
}

// O(n)
