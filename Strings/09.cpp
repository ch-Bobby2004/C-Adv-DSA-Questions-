	// Replace all occurrences of substring
// 	given three strings s1,s2,s3 of lengths n, m,and k respectively, the task is to modify the string s1 by replacing all substring s1 with the string s3 in the string s1.(pattern is replaced left to right)
// input s1=abababa  s2 = aba   s3 =a

#include <iostream>
using namespace std;

int main() {

    string s1 = "abababa";
    string s2 = "aba";
    string s3 = "a";

    string result = "";

    int n = s1.size();
    int m = s2.size();

    for(int i = 0; i < n; ){

        bool match = true;

        // Check substring manually
        if(i + m <= n){

            for(int j = 0; j < m; j++){
                if(s1[i+j] != s2[j]){
                    match = false;
                    break;
                }
            }

        }else{
            match = false;
        }

        if(match){
            result += s3;   // replace
            i += m;        // jump forward
        }
        else{
            result += s1[i]; // copy original
            i++;
        }
    }

    cout << result;
}
