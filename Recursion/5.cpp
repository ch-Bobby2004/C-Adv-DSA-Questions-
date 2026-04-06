/*

Find First n Fibonacci Numbers

Given an integer n. The task is to find the first n Fibonacci Numbers.

Input: n = 3
Output: 0 1 1

Input: n = 7
Output: 0 1 1 2 3 5 8

*/
#include <iostream>
using namespace std;

int fib(int n) {
    if(n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n =10;


    for(int i = 0; i < n; i++) {
        cout<<fib(i)<<" ";
    }

    return 0;
}

// TC  O(2^n)   Exponential
// Sp o(n)