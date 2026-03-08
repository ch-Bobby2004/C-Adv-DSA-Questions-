#include <iostream>
using namespace std;

bool isEven(int num) {
    return (num % 2 == 0);
}

int main() {
    int num = 7;   

    if (isEven(num)) {
        cout << "Even";
    } else {
        cout << "Odd";
    }

    return 0;
}