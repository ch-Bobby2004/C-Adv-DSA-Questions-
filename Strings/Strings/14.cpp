// Fizz Buzz
// given an integer n, for every positive interger i<=n, the task is to print 

// "FizzBuzz"  if i is divisible by 3 and 5
// "Fizz"  if i is divisible by 3 not 5
// "Buzz"  if i is divisible by 5 
// i as a string if non of the conditions are ture
#include <iostream>
using namespace std;

int main()
{

    int i = 4;
    if(i%3==0 && i%5==0){
        cout<<"FizzBuzz";
    }
    else if(i%3==0  ){
        cout<<"Fizz";
    }
    else if(i%5==0){
        cout<<"Buzz";
    }
    else{
        char ch = i;
        cout<<to_string(i);
    }

}
