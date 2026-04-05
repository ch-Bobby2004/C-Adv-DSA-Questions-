#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int* arr = new int[n]; // allocate array of 5 ints

    // assign values
    for (int i = 0; i < n; i++)
        arr[i] = i * 10;

    // print values
    for (int i = 0; i < n; i++)
        cout << arr[i] << " "; // 0 10 20 30 40

    delete[] arr; // free array memory
    arr = nullptr;
}