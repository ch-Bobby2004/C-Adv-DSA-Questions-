#include <iostream>
using namespace std;

void display(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    display(arr, 4);
}