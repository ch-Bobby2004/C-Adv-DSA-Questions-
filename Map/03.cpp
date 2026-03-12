#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> m = {{1, "One"}, {2, "Two"}};

    // Using auto in a loop
    for (auto x : m) {
        cout << x.first << " -> " << x.second << endl;
    }
}