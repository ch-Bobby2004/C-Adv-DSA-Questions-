// given a string s, the task is to reverse the string. reversing a string mean rearranging the characters such that the first character become the last, the second character become second last and so on

//part 2 without using extra space


#include <iostream>
using namespace std;

int main() {

    string s = "Bobby";
// Two Pointer
    int start = 0;
    int end = s.size() - 1;

   while(start < end){
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;

    start++;
    end--;
}

    cout<<s;
}


// TC : O(n)
// sp : O(1)