#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    cout << *ptr << endl;     // 10
    ptr++;
    cout << *ptr << endl;     // 20
    ptr += 2;
    cout << *ptr << endl;     // 40

    return 0;
}