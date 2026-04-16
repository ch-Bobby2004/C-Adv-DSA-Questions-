#include <bits/stdc++.h>
using namespace std;
class Car {
private:
    int speed;
public:
    string brand;
    int price;

    void drive() {
        cout << "Driving..." << endl;
    }
    // setter
    void set_speed(int sp){
        speed = sp;
    }
    // getter
    int get_speed(){
        return speed;
    }
};

int main() {
	Car c1;
    c1.brand = "BMW";
    c1.price = 500;
    c1.set_speed(100);
    cout<<c1.brand << " "<< c1.price<<" "<< c1.get_speed()<<endl;
    c1.drive();
    

}
