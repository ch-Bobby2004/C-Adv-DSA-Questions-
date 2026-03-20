#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;                   // number of elements
    vector<int> v(n, 1);         // all elements = 1

    for(auto x : v) cout << x << " ";
}