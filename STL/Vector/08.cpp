#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseVector(const vector<int>& v, int start, int end) {
    vector<int> result = v;  // copy original

    while (start < end) {
        swap(result[start], result[end]);
        start++;
        end--;
    }

    return result;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    vector<int> newVec = reverseVector(v, 2, 5);

    // Print new vector
    for (int x : newVec) {
        cout << x << " ";
    }

    return 0;
}