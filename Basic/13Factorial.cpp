#include <iostream>
using namespace std;
// calculate the factorial of a number
int main() {
    int n = 5;  
    // int n = 50;   print 0  because 50! have 65 digit number
    long int factorial = 1; 

    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "Factorial of " << n << " = " << factorial << endl;

    return 0;
}