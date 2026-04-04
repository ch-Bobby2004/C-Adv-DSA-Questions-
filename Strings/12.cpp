#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Too hot to hoot";
    string new_s = "";
    int n = s.length();
    
    for(char c: s)
    {
        if(isalnum(c))
        {
            new_s += tolower(c);
        }
    }
    
    string rev = new_s;
    reverse(rev.begin(), rev.end());
    
    if(rev == new_s)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    

    return 0;
}




// int main(){
//     string s = "Too hot to hoot";
//     string remove = "";
//     int n = s.length();
    
//     for(int i = 0; i < n; i++)
//     {
//          if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9') )
//         {
//             remove += s[i];
//         }
//         else if(s[i] >= 'A' && s[i] <= 'Z')
//         {
//             remove += (s[i] + 32);  //32 make lower case to upper and upper to lower
//         }
    
//     }
    
//     int left = 0;
//     int right = remove.length() - 1;

//     while(left < right){
//         if(remove[left] != remove[right]){
//             cout << "False";
//             return 0;
//         }
//         left++;
//         right--;
//     }

//     cout << "True";

//     return 0;
// }
