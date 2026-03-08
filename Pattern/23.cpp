#include <iostream>
using namespace std;

int main() {
    int n=6;
    int row = 1;
     while(row<=n){
         int col =row;
         while(col<n){
             cout<<" ";
             col++;
         }
         int val =1;
         while(val<=row){
             cout<<"* ";
             val++;
         }
         cout<<endl;
         row++;
     }
 

    return 0;
}