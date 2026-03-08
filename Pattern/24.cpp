#include <iostream>
using namespace std;

//    A
//   B B
//  C C C
// D D D D

int main() {
    int n=4;
    int row = 1;
     while(row<=n){
         int col =row;
         while(col<n){
             cout<<" ";
             col++;
         }
         int val =1;
         char ch = 'A'+(row-1);
         while(val<=row){
             cout<<ch <<" ";
             val++;
         }
         cout<<endl;
         row++;
     }
 

    return 0;
}