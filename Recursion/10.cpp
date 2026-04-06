#include <iostream>
#include <vector>
using namespace std;

bool isSortedRecursive(const vector<int> &v, int n) {
    // Base case: 0 or 1 element → sorted
    if (n == 0 || n == 1)
        return true;

    // Check last two elements
    if (v[n - 2] > v[n - 1])
        return false;

    // Recursive check for first n-1 elements
    return isSortedRecursive(v, n - 1);
}

int main() {
    vector<int> v = {1, 2, 5, 8, 12};

    if (isSortedRecursive(v, v.size()))
        cout << "Vector is sorted";
    else
        cout << "Vector is not sorted";

    return 0;
}


// size()	Number of elements	O(1)
// push_back()	Add element at end	O(1) amortized
// pop_back()	Remove last element	O(1)
// insert()	Insert at specific position	O(n)
// erase()	Remove at specific position / range	O(n)
// clear()	Remove all elements	O(n)