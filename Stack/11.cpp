// reverse individual words
// given string str, we need to print the reverse of individual words.
// input :Hello World
//output: olleH dlroW


#include <iostream>
#include <stack>
using namespace std;

int main() {

    string str = "Hello World";
    stack<char> st;

    for(char ch : str) {

        if(ch != ' ') {
            st.push(ch);
        }
        else {

            // print reversed word
            while(!st.empty()) {
                cout << st.top();
                st.pop();
            }

            cout << " "; // print space
        }
    }

    // print last word
    while(!st.empty()) {
        cout << st.top();
        st.pop();
    }
}

// Time: O(n)
// (We scan the string once.)

// Space: O(n) (stack)
