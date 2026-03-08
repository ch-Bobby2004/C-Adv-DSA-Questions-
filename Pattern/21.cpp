#include <iostream>
using namespace std;

int main() {
    int n=5;
    int row = 1;
     
    
     while(row<n){
         int col =1;
        char ch ='A' +(n-row-1);
         while(col<=row){
             
             cout<<ch++<<" ";
             col++;
         }
         cout<<endl;
         row++;
     }

 

    return 0;
}