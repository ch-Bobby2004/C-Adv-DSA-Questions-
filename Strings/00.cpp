// To convert a to A without using any built-in function

#include <iostream>
using namespace std;

int main() {
    char ch = 'a';

    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 'a' + 'A';
        
    } else if (ch >= 'A' && ch <= 'Z') {
        ch = ch - 'A' + 'a';
    }

    cout << ch;

    return 0;
}