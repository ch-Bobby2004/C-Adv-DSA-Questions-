#include <iostream>
using namespace std;
// Print Numbers and Then Sum



int sum(int n) {
    if(n == 0)
        return 0;

    cout<<n<<" ";
    return n + sum(n - 1);
}

int main() {
    int n=10;


    int result = sum(n);
    cout<<endl;

    cout<<result;

    return 0;
}