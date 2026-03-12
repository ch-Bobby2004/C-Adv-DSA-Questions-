// calculate factorial and then count trailing zeros,

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long fact = 1;

    // calculate factorial
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    int count = 0;

    while(true) {
        if(fact % 10 != 0)
            break;      // stop if last digit not 0
        
        count++;
        fact /= 10;     // remove the zero
    }

    cout << "Trailing zeros = " << count;

    return 0;
}






#include <iostream>
using namespace std;

int main() {
     int n=5;

    long long fact = 1;

    for(int i = 1; i <= n; i++)
        fact *= i;

    cout << "Factorial = " << fact << endl;

    int zeros = 0;
    int temp = n;

    while(temp > 0) {
        temp /= 5;
        zeros += temp;
    }

    cout << "Trailing zeros = " << zeros;
}
// Trailing zeros come from 10 = 2 × 5.
// In factorials there are many more 2s than 5s, so we only count how many times 5 appears in the factors.

// The loop counts:

// numbers divisible by 5

// numbers divisible by 25 (extra 5)

// numbers divisible by 125, etc.