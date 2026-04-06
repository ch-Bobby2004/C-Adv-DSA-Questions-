/*
1. Sum of First N Natural Numbers Using Recursion

Given a number n, find the sum of the first n natural numbers using recursion.
Examples:

Input: n = 3
Output: 6
Explanation: 1 + 2 + 3 = 6

Input: n = 5
Output: 15
Explanation: 1 + 2 + 3 + 4 + 5 = 15
*/
#include <iostream>
using namespace std;
int natural_sum(int n){
    
    cout << n << endl;
    
    if(n==0){
        return 0;
    }
    return n + natural_sum(n-1);
}
int main() {
 int n =3;
 cout<< natural_sum(n);
 
}


// Time Complexity: O(n)

// Space Complexity: O(n) (because of recursion stack)