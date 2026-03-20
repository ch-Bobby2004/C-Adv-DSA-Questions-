#include <iostream>
#include <list>     // can also use vector or deque
#include <algorithm> // for std::find
using namespace std;

int main() {
    list<int> lst = {10, 20, 30, 40};

    int x = 20;

    auto it = find(lst.begin(), lst.end(), x);  // returns iterator to element
    if(it != lst.end()) {
        cout << x << " is present in the list." << endl;
    } else {
        cout << x << " is NOT present in the list." << endl;
    }

    return 0;
}



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    auto it = find(v.begin(), v.end(), 50);

    if(it != v.end()) {
        cout << "Found: " << *it << endl;  // dereference iterator to get value
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}