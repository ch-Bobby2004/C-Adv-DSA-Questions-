//make the code shorter
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

       
        maxprofit = max(maxprofit, price[i] - minprice);
    }

    cout <<  maxprofit;

    return 0;
}




#include <bits/stdc++.h>
using namespace std;

int main() {

    int price[] = {7,10,1,3,6,9,2};
    int n = sizeof(price)/sizeof(price[0]);

    int minprice = INT_MAX;
    int maxprofit = 0;
    //  int profit=0 ;

    for(int i=0; i<n; i++){

        minprice = min(minprice,price[i]);
       

       
        maxprofit = max(maxprofit, price[i] - minprice);
    }


    cout <<  maxprofit;

    return 0;
}