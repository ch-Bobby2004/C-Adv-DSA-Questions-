#include <iostream>
using namespace std;


// input arr[1,5,4]
// [1]
// [5]
// [4]
// [1,5]
// [5,4]
// [1,5,4]
int main() {
    int arr[] = {1,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int totalSum = 0;

    for(int i = 0; i < n; i++) {
        totalSum += arr[i] * (i + 1) * (n - i);
        cout<<totalSum<<" ";
    }

    cout << "Sum of all subarrays = " << totalSum << endl;

    return 0;
}
// totalSum = 3 + 20 + 12 = 35


// (i + 1) → number of ways to choose the starting point

// (n - i) → number of ways to choose the ending point

// Multiply them → number of subarrays containing arr[i]



// Formula Reminder

// For each element at index i:



// Contribution=arr[i]×(i+1)×(n−i)

// Where:

// (i+1) → ways to choose start

// (n-i) → ways to choose end

// 🔹 Step-by-Step Calculation
// 1️⃣ Index 0 → Value 1
// 1 × (0+1) × (6-0)
// = 1 × 1 × 6
// = 6

// 2️⃣ Index 1 → Value 5
// 5 × (1+1) × (6-1)
// = 5 × 2 × 5
// = 50

// 3️⃣ Index 2 → Value 6
// 6 × (2+1) × (6-2)
// = 6 × 3 × 4
// = 72

// 4️⃣ Index 3 → Value 4
// 4 × (3+1) × (6-3)
// = 4 × 4 × 3
// = 48

// 5️⃣ Index 4 → Value 2
// 2 × (4+1) × (6-4)
// = 2 × 5 × 2
// = 20

// 6️⃣ Index 5 → Value 1
// 1 × (5+1) × (6-5)
// = 1 × 6 × 1
// = 6

// 🔹 Final Total
// 6 + 50 + 72 + 48 + 20 + 6 = 202