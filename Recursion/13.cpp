/*
Program for length of a string using recursion

Given a string calculate length of the string using recursion. 

Examples: 

Input: str = "abcd"
Output: 4
Explanation: The string "abcd" has a length of 4.
*/


#include <iostream>
using namespace std;

int len(string s)
{
    if(s == "")
    {
        return 0;
    }
    
    return 1 + len(s.substr(1));
}

int main()
{
    string s = "Aditya Jain";
    
    cout << len(s);
}




// int leng(string str, int i) {
//     if (str[i]==NULL)
//         return 0;

//     return 1+ leng(str, i+1);
// }

// int main() {
//     string str = "String";

//     cout <<leng(str,0);

//     return 0;
// }


