#include <iostream>
using namespace std;

int main() {
    int n=15;
    int row = 0;
    
     while(row<n){
         int col =0;
         int val = row;
         while(col<row){
             cout<<val--;
             col++;
         }
         cout<<endl;
         row++;
     }

 

    return 0;
}