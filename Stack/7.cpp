// valid parentheses in an expression
// given a string s containing three types of brackets {},(),and[].
// Determin whether the expressin are balanced or not.
// An expression is blanced if each opening bracket has a corresponding closing bracket of the same type, the pairs are properly ordered an no bracket closes before its matching pening bracket.
// Balanced:"[()()]{}" every opening bracket is closed in the correct order 
// not balanced: "([{]})" -> the ] closes before the matchihng { is closed, breaking the nesting rule

#include <iostream>
#include <stack>
using namespace std;

bool isValid(string str) {
    stack<char> st;

    for(char ch : str) {

        // If opening bracket → push
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }

        // If closing bracket → check
        else if(ch == ')' || ch == '}' || ch == ']') {

            if(st.empty())
                return false;

            char top = st.top();
            st.pop();

            if((ch == ')' && top != '(') ||
               (ch == '}' && top != '{') ||
               (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string str = "((3*1)-1*(8-2))";

    if(isValid(str))
        cout << "Valid\n";
    else
        cout << "Invalid\n";

    return 0;
}


// Complexity

// Time: O(n) → traverse each character once

// Space: O(n) → stack may store all opening brackets
