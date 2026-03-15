// You can find the square root of a number using Binary Search because the square root lies between 0 and the number itself (for n ≥ 1).

// We search for the number whose square is equal to or just less than the given number.



// Check middle value:

// mid * mid

// If mid * mid == n → exact square root

// If mid * mid < n → move right

// If mid * mid > n → move left

// Simple C++ Code
#include <iostream>
using namespace std;

// Step 1: Integer part using binary search
int sqrtBinary(int n) {
    int s = 0, e = n;
    int ans = -1;

    while (s <= e) {
        int mid = (s + e) / 2;

        if (mid * mid == n)
            return mid;

        if (mid * mid < n) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    return ans;
}

// Step 2: Decimal part refinement
double sqrtBinary_deci(int n, int precision, double sq) {
    double ans = sq;
    double factor = 0.1;

    for (int i = 0; i < precision; i++) {
        while ((ans + factor) * (ans + factor) <= n) {
            ans += factor;
        }
        factor /= 10;
    }

    return ans;
}

int main() {
    int n = 37;
    int sq = sqrtBinary(n);
    cout << "Integer part: " << sq << endl;

    double precise = sqrtBinary_deci(n, 3, sq); // 3 decimal places
    cout << "Square root with precision: " << precise << endl;
}


// Time	O(log n)
// Space	O(1)