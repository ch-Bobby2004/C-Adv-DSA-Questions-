// To check if 4 numbers can form a rectangle,
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[4] = {2,3,2,3};

    sort(a, a+4);

    if(a[0] == a[1] && a[2] == a[3])
        cout << "Rectangle is possible";
    else
        cout << "Rectangle is not possible";

    return 0;
}