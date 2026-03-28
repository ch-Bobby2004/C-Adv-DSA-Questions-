#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "HelloWorld";
    cout << str1.substr(0, 5)<<endl; // Hello
    
    string str2 = "Hello";
    cout << str2.find("e")<<endl; // returns index
    
    string str3 = "Hello";
    cout << str3.length()<<endl; // or str.size()   
    
    
    
    char str4[] = "Hello";
    int count = 0;

    while (str4[count] != '\0') {
        count++;
    }

    cout << "Length = " << count;
    return 0;
}