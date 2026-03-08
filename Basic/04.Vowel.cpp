#include <iostream>
using namespace std;
// check if a character is a vowel
int main() {
    char ch = 'E';  

    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Vowel";
            break;
        default:
            cout << "Not a vowel";
    }

    return 0;
}