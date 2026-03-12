#include <iostream>
using namespace std;

int main() {
    // a power b
    int a,b;
    int power =1;
    cin >> a;
    cin >>b;
    for(int i=1;i<=b;i++){
        power*=a;
    }
    cout<< power;

    return 0;
}
