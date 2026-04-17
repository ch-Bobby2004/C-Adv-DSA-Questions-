// sort a stack using a temporary stack
// Given a stack of integers, sort it in ascending order using another temporary stack


#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s, temp;

    // Push elements
    s.push(3);
    s.push(1);
    s.push(4);
    s.push(2);

    // Sorting
    while (!s.empty()) {
        int x = s.top();
        s.pop();

        while (!temp.empty() && temp.top() > x) {
            s.push(temp.top());
            temp.pop();
        }

        temp.push(x);
    }


    // Move back to original stack (ascending order)
    while (!temp.empty()) {
        s.push(temp.top());
        temp.pop();
    }

    // Print sorted stack
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}



// Time Complexity	O(n²)
// Space Complexity	O(n)