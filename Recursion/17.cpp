/*

Sum of digit of a number using recursion


Given a number, we need to find sum of its digits using recursion.

Examples: 

Input: 12345
Output: 15
Explanation: Sum of digits → 1 + 2 + 3 + 4 + 5 = 15

Input: 45632
Output: 20 
*/


#include <iostream>
using namespace std;

int digit_sum(int num) 
{
    if(num==0){
        return 0;
    }
    
    // 145 - 145%10 --> 5
    // 145/10 --> 14
    
    return num%10 + digit_sum(num/10);
    
}

int main() {
    int num =1234;

    cout << digit_sum(num);

    return 0;
}
