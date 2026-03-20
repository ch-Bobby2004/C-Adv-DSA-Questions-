// In C++, an STL array refers to the container provided by the Standard Template Library (STL) called array.

// What is std::array?

// std::array is a fixed-size array container available in C++.

// #include <array>
// using namespace std;

// array<data_type, size> name;

#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> arr = {1, 2, 3, 4, 5};

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}