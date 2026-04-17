// implement queue using stacks.
// implement a queue using stacks.we are allowed to use only stack data structure

#include <iostream>
#include <stack>
using namespace std;

stack<int> stack1, stack2;

// Enqueue operation
void enqueue(int x) {
    stack1.push(x);
}

// Dequeue operation
int dequeue() {
    if (stack1.empty() && stack2.empty()) {
        cout << "Queue is empty\n";
        return -1;
    }

    // Transfer elements if stack2 is empty
    if (stack2.empty()) {
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }
    }

    int frontElement = stack2.top();
    stack2.pop();
    return frontElement;
}

// Get front element
int front() {
    if (stack1.empty() && stack2.empty()) {
        cout << "Queue is empty\n";
        return -1;
    }

    if (stack2.empty()) {
        while (!stack1.empty()) {
            stack2.push(stack1.top());
            stack1.pop();
        }
    }

    return stack2.top();
}

// Check if queue is empty
bool isEmpty() {
    return stack1.empty() && stack2.empty();
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << dequeue() << endl;  // 10
    cout << front() << endl;    // 20
    cout << dequeue() << endl;  // 20
    cout << dequeue() << endl;  // 30
    cout << dequeue() << endl;  // Queue is empty

    return 0;
}