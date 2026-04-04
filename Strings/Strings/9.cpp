#include<bits/stdc++.h>
using namespace std;

void reverseStr(string &a,int start,int end)
{
    while(start<end)
    {
        char temp=a[start];
        a[start]=a[end];
        a[end]=temp;

        start++;
        end--;
    }
}

int main()
{
    string s="hello world !";

    int len=s.size();

    // Step 1: Reverse full string
    reverseStr(s,0,len-1);

    // Step 2: Reverse each word
    int start=0;

    for(int i=0;i<=len;i++)
    {
        if(i==len || s[i]==' ')
        {
            reverseStr(s,start,i-1);
            start=i+1;
        }
    }

    cout<<s;
}


// Tc o(n)

// Suppose words have lengths w1, w2, …, wk

// Each word is reversed once → time for words = w1 + w2 + … + wk

// But sum of all word lengths = len

// ✅ So total time = O(len)


// Each character is touched twice, not n times

// So total O(n), not O(n)