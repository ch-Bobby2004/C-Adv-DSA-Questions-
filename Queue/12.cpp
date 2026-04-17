//remove

#include <bits/stdc++.h>
using namespace std;
stack<int> stack1,stack2;

void enqueue(int value){
    stack1.push(value);
}
 int Empty(){
    return stack1.empty() && stack2.empty();
}
int dequeue(){
    if(Empty()){
        cout<<"queue is empty";
        return-1;
    }
    if(stack2.empty()){
        while(!stack1.empty()){
        stack2.push(stack1.top());
        stack1.pop();
    }
    }
    
    int dequeue_ele = stack2.top();
    stack2.pop();
    return dequeue_ele;
}
int front(){
    if(Empty()){
        cout<<"queue is empty";
        return -1;
    }
    if(stack2.empty()){
        while(!stack1.empty()){
        stack2.push(stack1.top());
        stack1.pop();
    }
    }
    
    
    return stack2.top();
}


int main() {
	enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << dequeue() << endl;  
    cout << front() << endl;    
    cout << dequeue() << endl;  
    cout << dequeue() << endl;  
    cout << dequeue() << endl; 

}
