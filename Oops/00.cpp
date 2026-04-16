#include <bits/stdc++.h>
using namespace std;
class Car {
public:
    string brand;
    int speed;

    void drive() {
        cout << "Driving..." << endl;
    }

};

int main() {
	Car c1;
    c1.brand = "BMW";
    c1.speed = 100;
    cout<<c1.brand << " "<< c1.speed<<endl;
    c1.drive();

}
