// 1️⃣ Check if a string is a palindrome; without using any built-in reverse function.
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	string str = "racerecar";
//     int n = str.length();

// bool flag = true;

// for(int i=0;i<=n/2;i++){
    
//     if(str[i]==str[n-1-i]){
//         flag =true;
//     }
//     else{
//         flag =false;
//         break;
//     }
// }
// if(flag){
//     cout<<"palindrome";
// }
// else{
//     cout<<"Not a palindrome";
// }

// }

// TC  O(n)
// Sp  O(1)



// 2️⃣ Find the first non-repeating character in a string.
// Example: "aabbcdeff" → c

//burate force code 

// int main() {
	
// 	string str = "aabbcdeff";
// 	string str = "aabbcc";
// int n = str.length();


// for(int i=0;i<n;i++){
//     bool flag = true;
//     for(int j=0;j<n;j++){
 
//         if(i!=j && str[i]==str[j]){
//             flag =false;
//             break;
//         }
    
// }

//     if(flag){
//         cout<<str[i];
//         break;
//     }
//     else if(i==n-1 && flag!=true)
//     cout << "No non-repeating character";   // What if all characters repeat?
// }





// }

// Tc O(n^2)
// sp O(1)


/////////////////////////////////////////////////////////////////////////////////////



// #include <bits/stdc++.h>
// using namespace std;


// // optimize code
// // O(n)

// int main() {
    
    
//      string s = "aabbcdeff";

//     int freq[26] = {0};

//     int n = s.length();

//     for(int i=0; i<n; i++){
//         freq[s[i] - 'a']++;
//     }

//     for(int i=0; i<n; i++){
//         if(freq[s[i] - 'a'] == 1){
//             cout<<s[i];
//             return 0;
//         }
//     }

//     cout<<"Invalid";
//     }


// Time Complexity:
// O(n) + O(n) = O(n) ✔️

// Space Complexity:
// freq[26] → constant size → O(1) ✔️
	










