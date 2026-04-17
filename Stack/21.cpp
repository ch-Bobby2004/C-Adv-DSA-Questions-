// Problem: Next Greater Element 🔹 Description Given an array of integers, for each element, find the next greater element to its right. Use a stack to solve it efficiently. If no greater element exists, output -1. explain me this question

// input  arr = [4, 5, 3, 2, 7, 8, 1, 10]
//  output arr = [4, 5, 3, 2, 7, 8, 1, 10]


#include <iostream>
#include <stack>
using namespace std;

int main() {
    int arr[] = {4, 5, 3, 2, 7, 8, 1, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int nge[n]; // array to store next greater elements
    stack<int> s;

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        // Pop elements smaller or equal to current element
        while (!s.empty() && s.top() <= arr[i])
            s.pop();

        // If stack is empty → no greater element
        if (s.empty())
            nge[i] = -1;
        else
            nge[i] = s.top();

        // Push current element onto stack
        s.push(arr[i]);
    }

    // Print the result
    cout << "Next Greater Elements:\n";
    for (int i = 0; i < n; i++)
        cout << nge[i] << " ";
    cout << endl;

    return 0;
}