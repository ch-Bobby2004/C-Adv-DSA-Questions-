#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    array<int, 5> arr = {1, 2, 3, 4, 5};

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout <<arr[0]<<endl;        // normal access
    cout <<arr.at(0) <<endl;     // safe access (checks bounds)
    cout <<arr.front()<<endl;     // first element
    cout <<arr.back()<<endl;     // last element
    cout <<arr.size()<<endl;     // number of elements
    cout <<arr.empty() <<endl;     // true if empty
    
    
    
    
    // arr.fill(10) ;     // fills all elements with 10
    // arr.swap(arr2);    // swaps with another array
    
    
    array<int, 4> a = {4, 1, 3, 2};
    sort(a.begin(), a.end());
    
    for(auto x : a) {
    cout << x << " ";
}
    
    
        
  
    
    
        
      
      
}