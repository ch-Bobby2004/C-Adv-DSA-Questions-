#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string str = "Hello World";

    int start = 0;

    for(int i = 0; i < str.length(); i++) {

        if(str[i] == ' ') {

            reverse(str.begin() + start, str.begin() + i);
            start = i + 1;
        }
    }

    // reverse last word
    reverse(str.begin() + start, str.end());

    cout << str;
}
