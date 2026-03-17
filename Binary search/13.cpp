// The Aggressive Cows problem is a classic binary search on answer problem from competitive programming.

// Problem Statement: Aggressive Cows

// You are given N stalls located at different positions on a straight line. The positions of the stalls are given in an array X of size N. You also have C cows that need to be placed in these stalls.

// The cows are aggressive, so you want to place them in such a way that the minimum distance between any two cows is as large as possible.

// Your task is to determine the largest possible minimum distance between any two cows when placing all C cows in the stalls.

// Input

// The first line contains an integer T — the number of test cases.

// For each test case:

// The first line contains two integers N and C.

// The next N lines each contain an integer representing the position of a stall.

// Output

// For each test case, print a single integer — the largest minimum distance between any two cows.


// Aggressive Cows Problem
// Problem Statement

// You are given:

// n stalls on a straight line, at positions stalls[i]

// c cows

// Rules:

// 1️⃣ Place all cows in stalls
// 2️⃣ Maximize the minimum distance between any two cows

// Return the largest minimum distance possible.

// Example
// stalls = [1, 2, 4, 8, 9]
// cows = 3

// Possible placements:

// 1️⃣ Cows at [1, 2, 4] → min distance = 1
// 2️⃣ Cows at [1, 4, 8] → min distance = 3 ✅ maximum
// 3️⃣ Cows at [1, 4, 9] → min distance = 3

// Answer = 3



#include <iostream>
#include <algorithm>
using namespace std;

bool canPlace(int stalls[], int n, int cows, int dist) {
    int count = 1;        // first cow in first stall
    int lastPos = stalls[0];

    for(int i = 1; i < n; i++) {
        if(stalls[i] - lastPos >= dist) {
            count++;
            lastPos = stalls[i];
        }

        if(count == cows)
            return true;
    }

    return false;
}

int aggressiveCows(int stalls[], int n, int cows) {

    sort(stalls, stalls + n);

    int low = 1;
    int high = stalls[n-1] - stalls[0];
    int ans = 0;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(canPlace(stalls, n, cows, mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    int stalls[] = {1, 2, 4, 8, 9};
    int n = 5;
    int cows = 3;

    cout << aggressiveCows(stalls, n, cows);

    return 0;
}



// Time Complexity

// Sorting → O(n log n)

// Binary search → O(log(max distance))

// Placement check → O(n)

// Final complexity:

// O(n log n + n log D)

// where D = max stall distance