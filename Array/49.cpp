// stock buy and sell - max one transaction allowed
// given an arry prices[] of non-neagtive intergers, representing the prices of the stocks on differnt days, find the maximum profit possible by buying and selling the stock on different day when at most one transaction is allowed. here one transaction means 1 buy +  1sell. if it is not possible to meke a profit the return 0    
// note stock must be bought before being sold.
// input: prices[7,10,1,3,6,9,2]
// output  8

// input: prices[7,6,4,3,1]
// output  0
// because 0 is like 3 par buy kiya or 1 par sell than 3-1 2 ka loss  

// Day	Price	Min Price	Profit	Max Profit
// buy than sell 
// 7	7	7	0	0
// 10	10	7	3	3
// 1	1	1	0	3
// 3	3	1	2	3
// 6	6	1	5	5
// 9	9	1	⭐8	⭐8
// 2	2	1	1	8





// #include <bits/stdc++.h>
// using namespace std;

// int main() {

    // int prices[] = {7,10,1,3,6,9,2};
    // int n = sizeof(prices)/sizeof(prices[0]);

    // int maxProfit = 0;

    // for(int i = 0; i < n-1; i++){          // Buy day
    //     for(int j = i+1; j < n; j++){      // Sell day
            
    //         int profit = prices[j] - prices[i];

    //         if(profit > maxProfit){
    //             maxProfit = profit;
    //         }
    //      // maxprofit = max(maxprofit,profit)
    //     }
    // }

    // cout << "Maximum Profit = " << maxProfit;





//      int sold = 0;
 
//  for(int i=0;i<n-1;i++){
//      for(int j=i+1;j<n;j++){
//          if(arr[i]<arr[j]){
//              int sum =arr[j]-arr[i];
//              if(sum>sold){
//                  sold=sum;
//              }
//          }
//      }
//  }
 
//  cout<< sold;

//     return 0;
// }








// O(n^2)




#include <bits/stdc++.h>
using namespace std;

int main() {

    int price[] = {7,10,1,3,6,9,2};
    int n = sizeof(price)/sizeof(price[0]);

    int minprice = INT_MAX;
    int maxprofit = 0;

    for(int i=0; i<n; i++){

        if(price[i] < minprice){
            minprice = price[i];
        }

        int profit = price[i] - minprice;

        if(profit > maxprofit){
            maxprofit = profit;
        }
        // maxprofit = max(maxprofit,profit)
    }

    cout <<  maxprofit;

    return 0;
}

// TC = O(n)



