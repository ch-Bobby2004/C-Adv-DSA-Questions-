class Test {
public:
    ~Test() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Test t1;  // constructor runs
}             // destructor runs automatically here