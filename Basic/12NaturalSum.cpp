#include <iostream>
using namespace std;
// sum of the first n natural numbers
int main() {
    int n = 10;   
    int sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum of first " << n << " natural numbers = " << sum << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n = 10;   

    int sum = n * (n + 1) / 2;

    cout << "Sum of first " << n << " natural numbers = " << sum << endl;

    return 0;
}