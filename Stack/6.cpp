#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> browser_history;
    
    browser_history.push("www.google.com");
    browser_history.push("www.instagram.com");
    browser_history.push("www.pw.live");
    
    cout << "No of opened pages: " << browser_history.size() << endl;
    
    cout << "Current page: " << browser_history.top() << endl;
    
    browser_history.pop();
    
    cout << "After closing current page: " << browser_history.size() << endl;
    
    cout << "Current page: " << browser_history.top() << endl;
    
}
