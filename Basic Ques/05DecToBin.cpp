#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 1000;
    int i = 0;
    int ans = 0;
    while(n!=0){
        int digit = n%10;
        int bit = n & 1;
        ans = (bit * pow(10,i)) +ans;
        i++;
        n = n>>1;
    }
    cout<<ans;

}

