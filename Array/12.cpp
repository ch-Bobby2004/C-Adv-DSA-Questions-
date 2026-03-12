#include <iostream>
using namespace std;

int main() {
     // Check a given number is plandrome
    int n;
    cin >> n;

    int original = n;
    int rev = 0;

    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        cout<< rev;
        n = n / 10;
    }
    // cout<< rev;

    if (original == rev)
        cout << "Palindrome number";
    else
        cout << "Not a palindrome number";

    return 0;
}
