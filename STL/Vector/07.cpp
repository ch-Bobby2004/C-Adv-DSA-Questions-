// Reverse an array

#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int>& v, int start, int end) {
    while (start < end) {
        swap(v[start], v[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    // Reverse from index 2 to 5
    reverseVector(v, 2, 5);

    // Print result
    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}