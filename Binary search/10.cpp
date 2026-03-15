// Book Allocation Problem
// Problem Statement

// You are given:
// N books
// Each book has pages[i]
// M students

// Rules:
// 1 Each student must get at least one book
// 2 Books must be allocated in order (contiguous)
// 3 Each book can be given to only one student
// 4 Goal: Minimize the maximum pages assigned to a student

// Return the minimum possible maximum pages.


// Books = [12, 34, 67, 90]
// Students = 2

// Possible allocations:

// Case 1
// Student1 → [12,34,67] = 113
// Student2 → [90] = 90
// Max = 113
// Case 2
// Student1 → [12,34] = 46
// Student2 → [67,90] = 157
// Max = 157
// Case 3
// Student1 → [12,34,67] = 113
// Student2 → [90] = 90

// Minimum possible maximum = 113   //because is minimum of all this like 157 and 113


// Key Idea
// We binary search the answer.
// The answer lies between:

// max(pages)  → minimum possible
// sum(pages)  → maximum possible

// Example:

// max = 90
// sum = 203

// So search range:

// [90, 203]



#include <iostream>
using namespace std;

bool isPossible(int books[], int n, int students, int limit) {
    int studentCount = 1;
    int pages = 0;

    for(int i = 0; i < n; i++) {

        if(pages + books[i] <= limit) {
            pages += books[i];
        }
        else {
            studentCount++;
            pages = books[i];

            if(studentCount > students)
                return false;
        }
    }

    return true;
}

int allocateBooks(int books[], int n, int students) {

    if(students > n)
        return -1;

    int maxPages = books[0];
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += books[i];
        if(books[i] > maxPages)
            maxPages = books[i];
    }

    int left = maxPages;
    int right = sum;
    int ans = -1;

    while(left <= right) {

        int mid = left + (right - left) / 2;

        if(isPossible(books, n, students, mid)) {
            ans = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return ans;
}

int main() {

    int books[] = {12, 34, 67, 90};
    int n = 4;
    int students = 2;

    cout << allocateBooks(books, n, students);

    return 0;
}


// Time Complexity
// O(N log(sum))

// Space Complexity
// O(1)