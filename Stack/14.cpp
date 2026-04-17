// check if two strings after processing backspace character are equal or not
// given two strings s1 and s2 let us assume that while typing the strings there were some backspaces encountered with are represented by #. the task is to determine whether whe resultant strings after processing the backspace character would be equal or not.

//input str1 =equ#al str2 = e#qu#al  
//output = not  eqal  and qal

#include <iostream>
#include <stack>
using namespace std;

string process(string str) {

    stack<char> st;

    for(char ch : str) {

        if(ch == '#') {

            if(!st.empty())
                st.pop();
        }
        else {
            st.push(ch);
        }
    }

    string result = "";

    while(!st.empty()) {
        result = st.top() + result;
        st.pop();
    }

    return result;
}

int main() {

    string s1 = "equ#al";
    string s2 = "e#qu#al";

    if(process(s1) == process(s2))
        cout << "Equal";
    else
        cout << "Not Equal";
}


// Time: O(n + m)
// (Process both strings.)

// Space: O(n + m) (stacks)



// Length of first string = n

// Length of second string = m

// Process s1 → takes n steps

// Process s2 → takes m steps

// 👉 Total work = n + m