
/*

Common Slot for Meeting of Two Persons


You are given two lists of availability time slots, slt1[][] and slt2[][], for two people. Each slot is represented as [start, end], and it is guaranteed that within each list, no two slots overlap (i.e., for any two intervals, either start1>end2 or start2>end1).
Given a meeting duration d, return the earliest common time slot of length at least d. If no such slot exists, return an empty array.

Examples:

Input: slt1[][] = [[10,50], [60,120], [140,210]], slt2[][] = [[0,15], [60,70]], d = 8
Output: [60,68]
Explanation: The only overlap is [60,70] (10 minutes), which is enough for an 8-minute meeting, so answer is [60,68]

Input: slt1[][] = [[10,50], [60,120], [140,210]], slt2[][] = [[0,15], [60,70]], d = 12
Output: []
Explanation: The max overlap is [60, 70] (10 minutes), but 12 minutes are needed, so no valid slot exists.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int slt1[][2] = { {10,50}, {60,120}, {140,210} };
    int slt2[][2] = { {0,15}, {60,70} };
    
    int d = 8;

    int n1 = sizeof(slt1) / sizeof(slt1[0]);
    int n2 = sizeof(slt2) / sizeof(slt2[0]);

    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        int start = max(slt1[i][0], slt2[j][0]);
        int end   = min(slt1[i][1], slt2[j][1]);

        // Check if overlap duration is enough
        if (end - start >= d)
        {
            cout << "[" << start << ", " << start + d << "]" << endl;
            return 0;   // earliest slot found
        }

        // Move the pointer that ends first
        if (slt1[i][1] < slt2[j][1])
            i++;
        else
            j++;
    }

    // If no slot found
    cout << "[]" << endl;

    return 0;
}