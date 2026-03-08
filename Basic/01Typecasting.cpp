#include <iostream>
#include <vector>
using namespace std;

int main() {
     // Implicit Type Casting (Automatic)
    //  Compiler automatically converts int to double.
     int a = 5;
     double b = 2.0;

     double result = a + b;   // 5 → 5.0
     
     
    //  Explicit Type Casting (Manual)
     double x = 5.7;
     int y = (int)x;
     
     
    int a1 = 5;
    int b1 = 2;

    double result1 = a1 / b1;
    
    cout<<result1;

}