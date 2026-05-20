#include <bits/stdc++.h>
using namespace std;
// 1 Implement a stack and reverse a string using it.

int main() {
	string str = "Bobby";
	stack<char> st;
	for(char ch :str){
	    st.push(ch);
	}
	string result = "";
	while(!st.empty()){
	    result+=st.top();
	    st.pop();
	}
	cout<<result;

}

// Time Complexity: O(n)
//  Space Complexity: O(n) (because stack stores n characters)