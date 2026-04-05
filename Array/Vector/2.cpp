#include <vector>
#include <iostream>
using namespace std;

int main() {
     vector<int> nums = {1, 2, 3};

    nums.push_back(4);

    for (int n : nums) {
        cout << n << " ";
    }
}