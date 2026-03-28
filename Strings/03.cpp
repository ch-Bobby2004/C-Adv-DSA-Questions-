// Reverse a String
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string str1 = "Hello";
    int n = str1.length();

    for (int i = n - 1; i >= 0; i--) {
        cout << str1[i];
    }

  
    
    
    
     string str2 = "Hello";
    int n2 = str2.length();

    for (int i = 0; i < n2 / 2; i++) {
        swap(str2[i], str2[n2 - i - 1]);
    }
    cout<<endl;
    cout << str2<<endl;
    
    reverse(str2.begin(), str2.end());

    cout << str2;
      return 0;
}