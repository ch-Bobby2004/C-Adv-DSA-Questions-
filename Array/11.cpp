#include <iostream>
using namespace std;

int main() {
    // Given 3 numbers, print the maximum among them
    int a = 5, b = 10 ,c =111;;
    int temp;
    if(a>b && a>c)
      cout<<a;
    else if(b>a && b>c)
       cout<<b;
    else if(c>a && c>b)
       cout<<c;

    

    return 0;
}





// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     cout << max(2,4);    //buildin function
//     cout << min(2,4);    //buildin function


//     cout << min(a, min(b,c));    //buildin function

//     return 0;
// }