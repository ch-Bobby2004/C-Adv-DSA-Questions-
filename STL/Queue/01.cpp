// queue:

// A FIFO (First In First Out) container adapter.

// Elements are inserted at the back and removed from the front only.

// Doesn’t support random access or insertion/removal at both ends.

// deque (double-ended queue):

// A sequence container that allows insertion and deletion at both front and back.

// Supports random access using [] or .at().

// More flexible than queue but slightly more complex in use.




#include <iostream>
#include <queue>   // Include the queue header
using namespace std;

int main() {
    // Create a queue of integers
    queue<int> q;

    // 1. Check if the queue is empty
    if(q.empty()) {
        cout << "Queue is empty initially.\n";
    }

    // 2. Add elements to the queue using push()
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Elements added: 10, 20, 30\n";

    // 3. Access front and back elements
    cout << "Front element: " << q.front() << endl;  // Should print 10
    cout << "Back element: " << q.back() << endl;    // Should print 30

    // 4. Remove an element using pop()
    q.pop();  // Removes 10
    cout << "Front element after pop: " << q.front() << endl; // Should print 20

    // 5. Size of the queue
    cout << "Queue size: " << q.size() << endl; // Should print 2

    // 6. Add more elements
    q.push(40);
    q.push(50);
    cout << "Added 40 and 50.\n";

    // 7. Iterate and print all elements
    cout << "Queue elements: ";
    queue<int> temp = q;  // Make a copy to print, as popping will remove elements
    while(!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // 8. Check empty again
    if(q.empty()) {
        cout << "Queue is empty.\n";
    } else {
        cout << "Queue is not empty.\n";
    }

    return 0;
}