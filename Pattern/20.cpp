#include <iostream>
using namespace std;

int main() {
    int n=5;
    int row = n;
     
    
     while(row>=0){
         int col =1;
        char ch ='A' +(row-1);
         while(col<=row){
             
             cout<<ch++<<" ";
             col++;
         }
         cout<<endl;
         row--;
     }

 

    return 0;
}