// Reversing the first k element of a queue
// given an integer k and a queue of integer, the task is to reverse the order of the first k element of the queue, leaving the other element in the same relative order
// input q =1 2 3 4 5 , k=3
// output q =3 2 1 4 5 



#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseFirstK(queue<int>& q, int k) {
    stack<int> st;

    // Step 1: Push first k elements into stack
    for(int i = 0; i < k; i++) {
        st.push(q.front());
        q.pop();
    }

    // Step 2: Push back into queue
    while(!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    // Step 3: Move remaining elements to back
    int t = q.size() - k;
    for(int i = 0; i < t; i++) {
        q.push(q.front());
        q.pop();
    }
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3;

    reverseFirstK(q, k);

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}


// Time:

// Push k elements → O(k)

// Move remaining n-k → O(n-k)

// Total = O(n)

// Space:

// Stack stores k elements
// O(k)