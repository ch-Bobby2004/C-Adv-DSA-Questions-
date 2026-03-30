// Given an m × n matrix, return all elements in spiral order — starting from the top‑left and going right → down → left → up, and repeating inward until all elements are visited.

// Example
// Input:
// [
//   [1, 2, 3],
//   [4, 5, 6],
//   [7, 8, 9]
// ]

// Output: [1, 2, 3, 6, 9, 8, 7, 4, 5]

// (Visits right → down → left → up …)

// 🧠 Approach (Four Boundaries)

// We maintain four pointers:

// top = starting row
// bottom = last row
// left = starting column
// right = last column

// Then loop:

// Move left → right along the top row
// Move top → bottom along the right column
// Move right → left along the bottom row (if still valid)
// Move bottom → top along the left column (if still valid)

// After each direction, shrink the boundary inward.


#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;
    
    while (left <= right && top <= bottom) {
        // 1. Left to Right
        for (int j = left; j <= right; j++)
            result.push_back(matrix[top][j]);
        top++;
        
        // 2. Top to Bottom
        for (int i = top; i <= bottom; i++)
            result.push_back(matrix[i][right]);
        right--;
        
        // 3. Right to Left (if still valid)
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                result.push_back(matrix[bottom][j]);
            bottom--;
        }
        
        // 4. Bottom to Top (if still valid)
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                result.push_back(matrix[i][left]);
            left++;
        }
    }
    
    return result;
}

int main() {
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    vector<int> ans = spiralOrder(matrix);
    
    for (int x : ans) {
        cout << x << " ";
    }
    
    return 0;
}

// Time Complexity: O(m × n) (visit every element once)
// Space Complexity: O(1) extra (ignoring output list)