// remove all duplicate adjacent character from a string using stack
// given a string, str, the task is to remove all the duplicate adjacent characters from the given string.
// input str = "azxxzy"
// output  "azxzy"


// a → push
// z → push
// x → push
// x → duplicate → pop
// z → duplicate → pop
// y → push

#include <iostream>
#include <stack>
using namespace std;

string removeDuplicates(string str) {

    stack<char> st;

    for(char ch : str) {

        if(!st.empty() && st.top() == ch) {
            st.pop(); // remove duplicate
        }
        else {
            st.push(ch);
        }
    }

    // build result string
    string result = "";

    while(!st.empty()) {
        result = st.top() + result; // reverse order   ay
        result += st.top() ; //    ya
        st.pop();
    }

    return result;
}

int main() {

    string str = "azxxzy";

    cout << removeDuplicates(str);
}

//  O(n)
// Each character is pushed and popped at most once.

// Space: O(n) (stack)
