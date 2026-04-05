#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 4;

    int** matrix = new int*[rows]; // array of pointers
    for (int i = 0; i < rows; i++)
        matrix[i] = new int[cols]; // array for each row

    // assign values
    int val = 1;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            matrix[i][j] = val++;

    // print
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    // free memory
    for (int i = 0; i < rows; i++)
        delete[] matrix[i];
    delete[] matrix;
}