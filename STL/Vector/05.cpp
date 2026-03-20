#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    v.clear();

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
}