    #include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    unordered_map<string, string> country;
    country = {{"india","IN"},{"america","US"}};


    for (auto x : country) {
        cout << x.first <<" --" << x.second << endl;
    }
}