#include <iostream>
using namespace std;

int main() {
    int mainMenu = 1;   // 1 = Fruits, 2 = Vegetables
    int subMenu = 2;    // 1 = Apple, 2 = Banana, etc.

    switch(mainMenu) {
        case 1:  // Fruits
            cout << "Fruits selected\n";

            switch(subMenu) {
                case 1:
                    cout << "Apple selected\n";
                    break;
                case 2:
                    cout << "Banana selected\n";
                    break;
                default:
                    cout << "Unknown fruit\n";
                    break;
            }
            break;

        case 2:  // Vegetables
            cout << "Vegetables selected\n";

            switch(subMenu) {
                case 1:
                    cout << "Carrot selected\n";
                    break;
                case 2:
                    cout << "Tomato selected\n";
                    break;
                default:
                    cout << "Unknown vegetable\n";
                    break;
            }
            break;

        default:
            cout << "Invalid category\n";
            break;
    }

    return 0;
}