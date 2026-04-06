// Print all unique subsets of array (may contain duplicates)
// Using while loop to skip duplicates

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void generateSubsets(vector<int>& nums, vector<int>& subset, int index) {
    
    // Print current subset
    cout << "{ ";
    for (int x : subset) cout << x << " ";
    cout << "}" << endl;

    int i = index;

    while (i < nums.size()) {
        // Include current element
        subset.push_back(nums[i]);

        // Recurse for next index
        generateSubsets(nums, subset, i + 1);

        // Backtrack
        subset.pop_back();

        // Skip all duplicates of nums[i]
        int current = nums[i];
        while (i < nums.size() && nums[i] == current) {
            i++;
        }
    }
}

int main() {
    vector<int> nums = {1, 2, 2};
    sort(nums.begin(), nums.end());  // Important

    vector<int> subset;
    generateSubsets(nums, subset, 0);

    return 0;
}