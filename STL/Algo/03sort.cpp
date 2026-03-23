#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {30, 10, 50, 20, 40};

    sort(arr, arr + 5);

    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}


// C++ sort() uses a hybrid algorithm called:

// What is Introsort?

// It is a combination of:

// Quick Sort ⚡ (fast average case)
// Heap Sort 🛡️ (safe worst case)
// Insertion Sort ✏️ (efficient for small arrays)