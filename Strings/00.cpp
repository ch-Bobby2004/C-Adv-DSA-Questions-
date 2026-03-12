// To convert a to A without using any built-in function

#include <iostream>
using namespace std;

int main() {
    char ch = 'a';

    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 'a' + 'A';
    }

    cout << ch;

    return 0;
}