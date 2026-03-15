// Painter Partition Problem
// Problem Statement

// You are given:

// n boards

// k painters

// boards[i] = length of each board

// Rules:

// 1️⃣ Each painter paints continuous boards only
// 2️⃣ One board can be painted by only one painter
// 3️⃣ Painters work at the same speed
// 4️⃣ Goal: Minimize the time required to paint all boards

// Time taken by a painter = sum of board lengths assigned to that painter.

// Example
// boards = [10, 20, 30, 40]
// painters = 2

// Possible partitions:

// Case 1
// Painter 1 → [10,20,30] = 60
// Painter 2 → [40] = 40
// Max time = 60
// Case 2
// Painter 1 → [10,20] = 30
// Painter 2 → [30,40] = 70
// Max time = 70

// ✅ Minimum possible time = 60



#include <bits/stdc++.h>
using namespace std;

bool isPossible(int boards[], int n, int painters, int mid){
    
    int painterCount = 1;
    int time = 0;
    
    for(int i = 0; i < n; i++){
        
        if(time + boards[i] <= mid){
            time += boards[i];
        }
        else{
            painterCount++;
            time = boards[i];
            
            if(painterCount > painters)
                return false;
        }
    }
    
    return true;
}

int painterPartition(int boards[], int n, int painters){
    
    int sum = 0;
    int maxBoard = boards[0];
    
    for(int i = 0; i < n; i++){
        sum += boards[i];
        maxBoard = max(maxBoard, boards[i]);
    }
    
    int left = maxBoard;
    int right = sum;
    int ans = -1;
    
    while(left <= right){
        
        int mid = left + (right - left) / 2;
        
        if(isPossible(boards, n, painters, mid)){
            ans = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    
    return ans;
}

int main(){
    
    int boards[] = {10, 20, 30, 40};
    int n = 4;
    int painters = 2;
    
    cout << painterPartition(boards, n, painters);
}



// Time Complexity
// O(N log(sum))

// Space Complexity
// O(1)