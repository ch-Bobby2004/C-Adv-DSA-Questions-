//// delete middle element of a stack
// givean a stack with push() and empty() operition the task is to delete the middle element 
#include <iostream>
#include <stack>
using namespace std;

void deleteMiddle(stack<int>& st) {

    stack<int> temp;
    int mid = st.size() / 2;

    // move elements above middle
    for(int i = 0; i < mid; i++) {
        temp.push(st.top());
        st.pop();
    }

    // delete middle
    st.pop();

    // restore elements
    while(!temp.empty()) {
        st.push(temp.top());
        temp.pop();
    }
}

int main() {

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    deleteMiddle(st);

    // print stack
    cout<<"Stack after deleteing Middle\n";
    cout<<"Output = [";
    while(!st.empty()) {
        cout << st.top();
        st.pop();
        if(!st.empty()){
            cout<<",";
        }
    }
    cout<<"]";
}


// Time:  O(n)

// Space: O(n) (second stack)