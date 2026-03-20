#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    v.push_back(4);  // add element
    v.pop_back();      // removes last element

    for(auto x : v) {
        cout << x << " ";
    }
    
    cout << "v[0]: " << v[0] << endl;
    cout << "v.at(0): " << v.at(0) << endl;
    cout << "v.front(): " << v.front() << endl;
    cout << "v.back(): " << v.back() << endl;
    cout << "v.size(): " << v.size() << endl;
    cout << "v.empty(): " << v.empty() << endl;
    
    sort(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}
    
}