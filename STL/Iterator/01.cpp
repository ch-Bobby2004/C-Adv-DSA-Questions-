// What is advance?

// advance is a function from <iterator>
// It moves an iterator forward or backward by a given number of steps

// Works with any iterator:
// Forward iterator (vector, deque, list)
// Bidirectional iterator (list)
// Random-access iterator (vector, deque


// #include <iterator>

// advance(iterator, n);

// iterator → the iterator you want to move
// n → number of positions to move
// Positive → move forward
// Negative → move backward (only bidirectional iterators


#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main() {
    list<int> lst = {10, 20, 30, 40};
    auto it = lst.begin();  // points to 10

    advance(it, 2);         // move 2 steps forward
    cout << "3rd element: " << *it << endl;  // 30

    advance(it, -1);        // move 1 step backward
    cout << "2nd element: " << *it << endl;  // 20

    return 0;
}