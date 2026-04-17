#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<string> words;

    words.push("you");
    words.push("Love");
    words.push("C++");

    while(!words.empty()) {
        cout << words.top() << " ";
        words.pop();
    }
}
