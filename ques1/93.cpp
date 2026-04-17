/*

String to Integer

Given a string s, convert it into integer format without utilizing any built-in functions.

Input: s = "-123"
Output: -123

Input: s = "452"
output: 452
*/

//the string can have alphabets and special characters as well
//then only consider the digits and do the same thing.

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "-12a3bc0d0";
    int n = s.length();
    int sign = 1;
    int num = 0;
    int j = 0;
    
    if(s[0] == '-'){
        sign =  -1;
        j = 1;
    }

    for(int i = j; i < n; i++){
        if(s[i] >= '0' && s[i] <= '9')
        {
        int digit = s[i] - '0';
        num = num * 10 + digit;
        }
    }
    
    num = sign * num;
   
    cout << num;

    return 0;
}




// int main(){
//     string s = "12300";
//     int n = s.length();
//     int sign = 1;
//     int num = 0;
//     int j = 0;
//     if(s[0] == '-'){
//         sign =  -1;
//         j = 1;
//         }
        
//     for(int i = j; i < n; i++){
       
//         int digit = s[i] - '0';
//         num = num * 10 + digit;
//     }
    
//     num = sign * num;
   
//     cout << num;

//     return 0;
// }