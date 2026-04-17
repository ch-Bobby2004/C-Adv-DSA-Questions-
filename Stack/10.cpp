#include <iostream>
#include <stack>
using namespace std;
//// delete middle element of a stack
// givean a stack with push() and empty() operition the task is to delete the middle element of it without using any additional data structure




// Pop
// Call function again
// When middle reached → remove
// While returning → push elements back

#include <iostream>
#include <stack>
using namespace std;

void deleteMiddle(stack<int>& st, int index, int mid) {

    if(index == mid) {
        st.pop();
        return;
    }

    int temp = st.top();
    st.pop();

    deleteMiddle(st, index - 1, mid);

    st.push(temp);
}

int main() {

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    int size = st.size();
    int mid = size / 2;

    deleteMiddle(st, size - 1, mid);

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}



// Why not use a second stack?”

// You say:

//  “Using recursion avoids manually creating another data structure while still letting us restore the original order.”

// O(n)
// We touch every element once.

// Space:
// 👉 O(n) (recursion stack)