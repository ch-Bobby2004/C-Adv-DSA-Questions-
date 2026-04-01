// stock buy and sell-multiple transcation allowed
// given an array prices[] representing stock prices, find the maximum total profit that can be earned by buying and selling the stock the stock any number of times.
// note we can only sell a stock which we have bought earlier and we cannot hold multiple stocks on any day 
// input prices[100,180,260,310,40,535,595]

// output
// 100-310 =210
// 595-40 ==555





#include <iostream>
using namespace std;

int main() {

    int prices[] = {100,180,260,310,40,535,595};
    int n = sizeof(prices)/sizeof(prices[0]);

    int profit = 0;

    for(int i = 1; i < n; i++){
        if(prices[i] > prices[i-1]){
            profit += prices[i] - prices[i-1];
        }
    }

    cout << "Total Profit = " << profit;

    return 0;
}

// TC o(n)





