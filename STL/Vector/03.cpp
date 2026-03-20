#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    for(int i = 1; i <= 10; i++) {
        v.push_back(i);
        cout << "Size: " << v.size() 
             << " Capacity: " << v.capacity() << endl;
    }
}

// Capacity doubles when full
// Copy happens only when resizing
// That’s why push_back() is fast overall