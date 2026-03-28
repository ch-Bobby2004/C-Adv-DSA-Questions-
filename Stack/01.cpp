// Reverse a string usig Stack

#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str = "Hello";
    stack<char> s;

    for (char c : str) {
        s.push(c);
    }

    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    return 0;
}