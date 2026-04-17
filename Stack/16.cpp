
// Check if two strings after processing # character are equal or not

// Given two strings s1 and s2, let us assume that while typing the strings there were some characters, which are represented by #. The task is to determine whether the resultant strings after processing the # character would be equal or not.


// Input: s1 = equ#al, s2 = e#qu#al
// op: Yes.

// s1 = equ#al --> equal
// s2 = e#qu#al --> equal

#include <iostream>
using namespace std;

int main()
{
    string s1 = "equ#al", s2 = "e#qu#al";
    string r1 = "", r2 ="";
    
    int n1 = s1.length();
    int n2 = s2.length();
    
    for(int i=0; i<n1; i++)
    {
        if(s1[i] != '#')
        {
            r1 = r1 + s1[i];
        }
    }
    
    
    for(int i=0; i<n2; i++)
    {
        if(s2[i] != '#')
        {
            r2 = r2 + s2[i];
        }
    }
    
    cout << "R1 is : " << r1 << endl;
    cout << "R2 is : " << r2 << endl;
    
    if(r1 == r2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
