#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {1, 2, 4, 5};

    // Insert 3 at index 2
    v.insert(v.begin() + 2, 3);

    for (int x : v)
        cout << x << " ";

    return 0;
}



// int main() {
//     vector<int> v = {1, 2, 3, 4, 5, 6};

//     // Remove elements from index 1 to 3
//     v.erase(v.begin() + 1, v.begin() + 4);

//     for (int x : v)
//         cout << x << " ";

//     return 0;
// }