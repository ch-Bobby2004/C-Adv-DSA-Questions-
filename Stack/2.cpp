#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    stack<int> s; // create a stack of integers

    // push elements
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // 30
    

//   Error because pop reuten noting
    // int p = s.pop(); 

    s.pop();
    cout << "Top after pop: " << s.top() << endl; // 20



    return 0;
}
