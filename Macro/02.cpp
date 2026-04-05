#include <iostream>
using namespace std;

#define SQUARE(x) ((x) * (x))

int main() {
    int a = 5;
    cout << SQUARE(a) << endl;     // 25
    cout << SQUARE(a + 1) << endl; // 36, careful with parentheses!
}


//  Undefining a Macro
// #define MAX 100
// #undef MAX  // removes the macro