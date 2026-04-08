// print all subset of arr = [1,2,3] array of unique element
#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(vector<int>& nums, vector<int>& subset, int index) {
    if (index == nums.size()) {
        // Print current subset
        cout << "{ ";
        for (int x : subset) cout << x << " ";
        cout << "}" << endl;
        return;
    }

    // Include nums[index]
    subset.push_back(nums[index]);
    generateSubsets(nums, subset, index + 1);

    // Backtrack: remove last element
    subset.pop_back();

    // Exclude nums[index]
    generateSubsets(nums, subset, index + 1);
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> subset;
    generateSubsets(nums, subset, 0);
    return 0;
}


// { 1 2 3 }
// { 1 2 }
// { 1 3 }
// { 1 }
// { 2 3 }
// { 2 }
// { 3 }
// { }



// TC=O(n∗2^n)
// 2^n → number of recursive calls
// n → time to print each subset


// SC=O(n) (recursion stack) +O(n) (subset array) =   O(n)