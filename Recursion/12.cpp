/*

Print reverse of a string using recursion

Given a string, the task is to print the given string in reverse order using recursion.

Input: s = "Reverse a string Using Recursion"
Output: "noisruceR gnisU gnirts a esreveR"
Explanation: After reversing the input string we get "noisruceR gnisU gnirts a esreveR". 

*/




#include <iostream>
using namespace std;

string rev(string str){
    
    if(str.size() == 0)
    {
        return str;
    }

    return rev(str.substr(1)) + str[0];
    
}



int main() {
 string str ="Reverse a string";
 int n = str.length();
 cout << rev(str);

    // cout << str.substr(1); v+e+R 
 

}

// Let’s look at how rev("hello") would work:

// rev("hello") will call rev("ello") + "h".

// rev("ello") will call rev("llo") + "e".

// rev("llo") will call rev("lo") + "l".

// rev("lo") will call rev("o") + "l".

// rev("o") will return "o" (base case of recursion





#include <iostream>
using namespace std;


string reversestr(string str, int i) {
    
    if (i < 0)
        return "";

    return str[i] + reversestr(str, i - 1);
}

int main() {
    string str = "reverse the str";

    string reversed = reversestr(str, str.length() - 1);

    cout <<reversed;

    return 0;
}


