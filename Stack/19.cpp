/*
Check Redundant Brackets


Given a balanced expression string s, check if it contains redundant parentheses. Return true if redundant, else false.
Redundant Parentheses: Parentheses are redundant if removing them does not change the expression.
Note: Expression is valid, contains operators +, -, *, /, and no spaces.

Input: s = "(a+(b)/c)" --> "(a+b/c)"
op: yes

Input: s = "((a+b)*c)"
op: no

Input: s = "((a+b))" --> (a+b)
op: yes
*/




#include <iostream>
#include <stack>
using namespace std;

bool hasRedundantParentheses(string s) {
    stack<char> st;

    for (char ch : s) {

        // Push opening bracket and operators
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else if (ch == ')') {

            bool hasOperator = false;

            // Check inside parentheses
            while (!st.empty() && st.top() != '(') {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                    hasOperator = true;

                st.pop();
            }

            // Pop the opening '('
            if (!st.empty())
                st.pop();

            // If no operator found → redundant
            if (!hasOperator)
                return true;
        }
    }

    return false;
}

int main() {
    string s1 = "(a+(b)/c)";
    string s2 = "((a+b)*c)";

    cout << (hasRedundantParentheses(s1) ? "Yes" : "No") << endl;
    cout << (hasRedundantParentheses(s2) ? "Yes" : "No") << endl;

    return 0;
}


// Time: O(n)

// Space: O(n)