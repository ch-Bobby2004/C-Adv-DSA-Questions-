#include <iostream>
#include <queue>
using namespace std;
int main()
{
    
    queue<string> opdQueue;
    opdQueue.push("ch");
    opdQueue.push("yk");
    opdQueue.push("jk");
    
    cout<<"Patient being consulted:"<<opdQueue.front()<<endl;
    
    cout<<"Last patient waiting:"<<opdQueue.back()<<endl;
    
    cout<<"Total patients waiting:"<<opdQueue.size()<<endl;
    
    opdQueue.pop();
    
    cout<<"Next patient to be consulted:"<<opdQueue.front()<< endl;
    
    if(opdQueue.empty())
    {
        cout << "No patients waiting" << endl;
    } 
    else
    {
        cout << "Patients are still waiting" << endl;
    }
}