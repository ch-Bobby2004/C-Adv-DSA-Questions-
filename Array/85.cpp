
#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
// better solution using sorting. TC: O(nlogn)
int main()
{
    int a[] = {10,20,10,5,20, 20};
    int  n = sizeof(a)/sizeof(a[0]);
    sort(a, a+n);// 5, 10, 10, 20, 20 , 20
    int count = 0;
    
    for(int i=0; i<n-1; i++)
    {
        count =1;
        while(a[i] == a[i+1])
        {
            count++;
            i++;
        }
        
        cout << a[i] << "--" << count << endl;
    }
    
    return 0;

}
