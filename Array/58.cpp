//split array into three equal sum aegments:
// given an integer array arr[] the task is to divide the array into three non-empty contiguous segment with equal sum. in other words, we need to return an index pair [i,j], such that sum(arr[0..i])=sum(arr[i+1....j]) = sum (arr[j+1...n-1])

// note if it is impossible to divide the array into three non-empty contiguos segment, return[-1,-1]


#include <iostream>
using namespace std;

void splitArray(int arr[], int n){

    if(n < 3){
        cout<<"-1,-1";
        return;
    }

    int total = 0;

    // Step 1: Find total sum
    for(int i=0; i<n; i++){
        total += arr[i];
    }

    // If total is not divisible by 3 → impossible
    if(total % 3 != 0){
        cout<<"-1,-1";
        return;
    }

    int target = total / 3;
    int currSum = 0;
    int first = -1, second = -1;
    int count = 0;

    // Step 2: Traverse array once
    for(int i=0; i<n; i++){
        currSum += arr[i];

        if(currSum == target){
            count++;

            if(count == 1)
                first = i;
            else if(count == 2){
                second = i;
                break; // no need to continue
            }

            currSum = 0;
        }
    }

    // Step 3: Check if valid split exists
    if(first != -1 && second != -1 && second < n-1)
        cout<<first<<" "<<second;
    else
        cout<<"-1,-1";
}

int main(){

    int arr[] = {2,2,1,3,3,-1,6,-1};
    int n = sizeof(arr)/sizeof(arr[0]);

    splitArray(arr,n);
}


// One loop → O(n)
// Another loop → O(n)
// O(n)+O(n)=O(n)

// Extra variables used:

// total, target, currSum, first, second, count


// All are simple integers → constant space.

// sc= O(1)
// SpaceComplexity=O(1)