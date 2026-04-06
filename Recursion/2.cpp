
/*

Print 1 to n using Recursion

Given an integer n. Print numbers from 1 to n using recursion.
*/

#include <iostream>
using namespace std;

void print(int n){
    if(n == 0)  // Base case
        return;
    cout << n << " ";
    print(n-1);  // Recursive call
}

int main(){
    print(5);
}

// TC O(n)
// sp O(n)