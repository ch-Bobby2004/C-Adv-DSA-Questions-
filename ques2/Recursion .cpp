// 1️⃣ Find the sum of digits of a number using recursion.
// Example: 123 → 6


#include <iostream>
using namespace std;

int Sumdigit(int num) {
    if (num == 0) {
        return 0;  // Base case
    }
    return (num % 10) + Sumdigit(num / 10);  // Take last digit + sum of remaining digits
}

int main() {
    int num = 123;
    int sumOfdigit = Sumdigit(num);
    cout << "Sum of digits of " << num << " = " << sumOfdigit << endl;
}




// Sumdigit(123)
// = 3 + Sumdigit(12)

// = 3 + (2 + Sumdigit(1))

// = 3 + (2 + (1 + Sumdigit(0)))

// = 3 + 2 + 1 + 0

// = 6



// TC Number of digits = log₁₀(n)

// Time Complexity = O(d)
// (where d = number of digits)

// O(log n)


// Space Complexity

// Recursion uses call stack.

// If number has d digits → d recursive calls.

// So:

// Space Complexity = O(d)
// (or O(log n))

// Very important: recursion uses stack memory












// 🔥 The Confusion

// You are thinking:

// “There is one recursive call each time, so it must be O(n).”

// That would be true if n meant number of digits.

// But here’s the important part 👇

// 🧠 What Does “n” Represent?

// In:

// int Sumdigit(int num)


// The input is a number, not an array.

// So when we say n, we mean the value of the number.

// Example:

// num = 123456


// This number is around 10⁵.

// 🔥 Important Concept

// Number of digits in a number = log₁₀(n)

// Example:

// Number	Digits	log₁₀(n)
// 9	1	~1
// 99	2	~2
// 999	3	~3
// 9999	4	~4

// Digits grow logarithmically.

// 🧠 Why Your Function is O(log n)

// Each recursive call does:

// num / 10


// So:

// 123456
// → 12345
// → 1234
// → 123
// → 12
// → 1
// → 0


// If number has d digits, there are d recursive calls.

// And:

// d = log₁₀(n)


// So time complexity = O(log n)

