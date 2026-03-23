#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    if (binary_search(arr, arr + 5, 30))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}