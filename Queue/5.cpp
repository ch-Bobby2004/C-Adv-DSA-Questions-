#include <bits/stdc++.h>
using namespace std;

queue<string>process_Id;
queue<float>process_arrivalTime;
    

void process_register(string PID,float arrivaltime)
{
    process_Id.push(PID);
    process_arrivalTime.push(arrivaltime);
}

void FCFS()
{
    cout<<"Process_executed:"<<endl;
    while(process_Id.size())
    {
        cout<<process_Id.front()<<endl;
        process_Id.pop();
        process_arrivalTime.pop();
    }
}

int main()
{
  process_register("P0",0.0);
  process_register("P1",1.2);
  process_register("P2",2.0);
  
  FCFS();
  
}