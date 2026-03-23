#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 10, 15, 20, 25};

    if (binary_search(v.begin(), v.end(), 15))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}