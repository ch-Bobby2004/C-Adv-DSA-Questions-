#include <vector>
#include <iostream>
using namespace std;

#include <algorithm>
// is a header file in C++ that gives you access to many useful algorithms like sorting, searching, counting, reversing, etc.

int main() {
    vector<int> v = {5, 2, 9, 1, 3};

    sort(v.begin(), v.end());

    for (int x : v)
        cout << x << " ";

    return 0;
}