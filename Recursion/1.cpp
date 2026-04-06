/*

Print 1 to n using Recursion

Given an integer n. Print numbers from n to 1 using recursion.
*/
#include <iostream>
using namespace std;

void print(int n){
    if(n == 0)  // Base case
        return;

    print(n-1);  // Recursive call
    cout << n << " ";
}

int main(){
    print(5);
}


// print(5)
//   → print(4)
//       → print(3)
//           → print(2)
//               → print(1)
//                   → print(0)  ← Base case reached




// What is Call Stack?

// When a function is called, it is pushed into memory stack.


// print(5)
// print(4)
// print(3)
// print(2)
// print(1)
// print(0)

// Then they return in reverse order.

// Like a stack:

// Push → Push → Push
// Pop ← Pop ← Pop