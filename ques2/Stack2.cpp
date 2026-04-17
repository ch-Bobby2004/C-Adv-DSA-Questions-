#include <bits/stdc++.h>
using namespace std;
// Check for balanced parentheses in an expression.
// Example: {[()]} → Valid

bool parentheses(string str){
    stack<char>st;
    for(char ch:str){
        if(ch=='('  || ch=='{' ||ch=='['){
            st.push(ch);
        }
        else if(ch==')'  || ch=='}' ||ch==']'){
            if(st.empty()){
                return false;
            }
            char top = st.top();
            st.pop();
            if( (ch==')' && top!='(') || 
            (ch=='}' && top!='{') ||  
            (ch==']' && top!='[') )
            return false;
        }
    }
    return st.empty();
}

int main() {
    string str = "{[()]}";
    if(parentheses(str)){
        cout<<"Valid";
    }
    else{
        cout<<"Invalid";
    }
}

//  Time Complexity: O(n)
//  Space Complexity: O(n)
