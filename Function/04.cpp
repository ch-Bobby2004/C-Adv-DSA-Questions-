// default argument allows a function parameter to have a default value if the caller does not provide one. This makes functions more flexible and reduces the need for function overloading.

#include <iostream>
using namespace std;

void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet("Alice"); // Hello, Alice!
    greet();        // Hello, Guest!
}

// Rules for Default Arguments
// Rightmost parameters only can have default values.
// Example:
// void display(int a, int b = 10, int c = 20); // ✅ correct
// void display(int a = 1, int b, int c);       // ❌ wrong
// Default values must be known at compile time.
// Default arguments can be used in function declaration or definition, but usually they are given in the declaration if function is defined in another file.
// . Example: Multiple Defaults
#include <iostream>
using namespace std;

void calculate(int a, int b = 5, int c = 10) {
    cout << "Sum = " << a + b + c << endl;
}

int main() {
    calculate(1);        // 1 + 5 + 10 = 16
    calculate(1, 2);     // 1 + 2 + 10 = 13
    calculate(1, 2, 3);  // 1 + 2 + 3 = 6
}