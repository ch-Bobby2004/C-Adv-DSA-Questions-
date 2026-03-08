#include <iostream>
using namespace std;
// print uppercase letters A–Z and their ASCII values
int main() {
    for(char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " : " << int(ch) << endl;
    }

    return 0;
}