// In C++, a pair is used to store two values together (possibly of different types). It is provided in the STL inside the <utility> header.

#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, int> p;

    p.first = 10;
    p.second = 20;

    cout << p.first << " " << p.second;
}




// pair<int,int> arr[3] = {{1,2}, {3,4}, {5,6}};


// cout << arr[1].first;   // 3
// cout << arr[1].second;  // 4


// Where pair is commonly used
// Graph algorithms
// Storing coordinates (x, y)
// Returning two values from function
// Priority queues
// Competitive programming