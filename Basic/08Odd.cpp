#include <iostream>
using namespace std;
// print first 20 odd numbers
int main() {
    int count = 0;

    for(int i = 1; count < 20; i++) {
        if(i % 2 != 0) {   
            cout << i << " ";
            count++;
        }
    }

    return 0;
}