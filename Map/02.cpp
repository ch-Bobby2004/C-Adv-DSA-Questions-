#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    map<int, int> squares;

    for (int i = 0; i < n; i++) {
        squares[arr[i]] = arr[i] * arr[i]; // map number to its square
    }

    for (auto x : squares) {
        cout << x.first << "^2 = " << x.second << endl;
    }
}