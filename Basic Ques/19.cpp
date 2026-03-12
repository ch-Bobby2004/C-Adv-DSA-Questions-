// given two integers start and end find all the armstrong number between start and end including both.

#include <iostream>
#include <cmath>   // for pow()
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for (int num = start; num <= end; num++) {

        int temp = num;
        int digits = 0;

        // Count digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        int sum = 0;

        // Calculate power sum
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}






// #include <iostream>
// #include <cmath>
// using namespace std;

// // Function to count digits
// int countDigits(int n) {
//     int digits = 0;

//     if (n == 0) return 1; // special case

//     while (n != 0) {
//         digits++;
//         n /= 10;
//     }
//     return digits;
// }

// // Function to check Armstrong
// bool isArmstrong(int num) {

//     int digits = countDigits(num);
//     int temp = num;
//     int sum = 0;

//     while (temp != 0) {
//         int digit = temp % 10;
//         sum += pow(digit, digits);
//         temp /= 10;
//     }

//     return sum == num;
// }

// int main() {

//     int start, end;
//     cin >> start >> end;

//     for (int i = start; i <= end; i++) {
//         if (isArmstrong(i)) {
//             cout << i << " ";
//         }
//     }

//     return 0;
// }
