/*
Find maximum depth of nested parenthesis in a string

We are given a string having parenthesis like below 
     “( ((X)) (((Y))) )” 
We need to find the maximum depth of balanced parenthesis, like 4 in the above example. Since ‘Y’ is surrounded by 4 balanced parentheses. 

Input : S = "( p((q)) ((s)t) )"
op: 3
*/




// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s = "( ((X)) (((Y))) )";
//     int count = 0;
//     stack<char> st;
    
//     int n = s.size();
    
//     for(int i =0; i<n; i++)
//     {
//         if(s[i] == '(')
//         {
//             st.push(s[i]);
//         }
//         else if(s[i]==')')
//         {
//             int k = st.size();
//             count = max(count,k );
//             st.pop();
//         }
//     }
    
//     cout << count << endl;
    
    
// }



#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s = "( ((X)) (((Y))) )";
    int count = 0;
    stack<char> st;

    int n = s.size();

    for(int i = 0; i < n; i++)
    {
        if(s[i] == '(')
        {
            st.push(s[i]);
            int maxii = st.size();
            count = max(count, maxii);  // Update here
        }
        else if(s[i] == ')')
        {
            if(!st.empty())
                st.pop();
        }
    }

    cout << count << endl;
}

