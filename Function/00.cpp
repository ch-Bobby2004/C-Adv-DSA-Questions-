#include <iostream>
using namespace std;

// Function to find sum
int findSum(int arr[], int n){
    int sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    return sum;
}

// Function to find average
double findAverage(int arr[], int n){
    int sum = findSum(arr, n);
    return (double)sum / n;
}

int main(){

    int arr[] = {20, 66, 44, 10};
    int n = 4;

    double avg = findAverage(arr, n);

    cout << "Average = " << avg;

    return 0;
}
