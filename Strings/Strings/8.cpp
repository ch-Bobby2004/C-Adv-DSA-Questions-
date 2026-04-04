    //given a sentence whre words are separated by a space. create another sentence where the order of the word is reverse


    #include <iostream>
using namespace std;

int main() {

    // string s = " u Love I";
    string s = "u Love I";

    int n = s.length();

    for(int i=n-1; i>=0; i--){

        // if(s[i]==" "){  //error because " " ust for multiple character
        if(s[i]==' '){
            
            for(int j=i+1; j<n; j++){
                cout<<s[j];
            }
            cout<<" ";

            n = i; //move end
        }
    }
        // print first word
    for(int i=0;i<n;i++){
        cout<<s[i];
    }

}


