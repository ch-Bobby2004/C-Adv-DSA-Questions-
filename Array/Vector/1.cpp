#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << v[0] << endl;   // 10
    cout << v.size();       // 3
}


// mportant Vector Functions
// Function	Meaning
// push_back(x)	Add element at end
// pop_back()	Remove last element
// size()	Number of elements
// empty()	Check if empty
// v[i]	Access elemen