#include <iostream>
using namespace std;

void counter() {
    static int count = 0;  // initialized only once
    count++;
    cout << count << endl;
}

int main() {
    counter(); // 1
    counter(); // 2
    counter(); // 3
}