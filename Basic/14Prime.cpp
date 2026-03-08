#include <iostream>
using namespace std;

int main() {
    int num = 17; 
    bool isPrime = true;

    if(num <= 1) {
        isPrime = false;
    } else {
        for(int i = 2; i*i <= num; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}

// Normally, to check if a number num is prime, you check all numbers from 2 to num-1.

// But this is slow for big numbers.

// 💡 Fact:
// If num has a factor bigger than √num, it must have a smaller factor too.

// So you only need to check numbers up to √num.