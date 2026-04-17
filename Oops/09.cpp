#include <iostream>
using namespace std;

/* -------------------- 1. SINGLE INHERITANCE -------------------- */
class A {
public:
    void showA() {
        cout << "Class A (Single Inheritance base)\n";
    }
};

class B : public A {   // A → B
public:
    void showB() {
        cout << "Class B (Single Inheritance derived)\n";
    }
};

/* -------------------- 2. MULTILEVEL INHERITANCE -------------------- */
class C {
public:
    void showC() {
        cout << "Class C (Multilevel base)\n";
    }
};

class D : public C {   // C → D
public:
    void showD() {
        cout << "Class D (Multilevel level 1)\n";
    }
};

class E : public D {   // D → E
public:
    void showE() {
        cout << "Class E (Multilevel level 2)\n";
    }
};

/* -------------------- 3. MULTIPLE INHERITANCE -------------------- */
class X {
public:
    void showX() {
        cout << "Class X (Multiple inheritance parent 1)\n";
    }
};

class Y {
public:
    void showY() {
        cout << "Class Y (Multiple inheritance parent 2)\n";
    }
};

class Z : public X, public Y {   // X + Y → Z
public:
    void showZ() {
        cout << "Class Z (Multiple inheritance child)\n";
    }
};

/* -------------------- 4. HIERARCHICAL INHERITANCE -------------------- */
class P {
public:
    void showP() {
        cout << "Class P (Hierarchical base)\n";
    }
};

class Q : public P {
public:
    void showQ() {
        cout << "Class Q (Hierarchical child 1)\n";
    }
};

class R : public P {
public:
    void showR() {
        cout << "Class R (Hierarchical child 2)\n";
    }
};

int main() {

    cout << "----- SINGLE INHERITANCE -----\n";
    B obj1;
    obj1.showA();
    obj1.showB();

    cout << "\n----- MULTILEVEL INHERITANCE -----\n";
    E obj2;
    obj2.showC();
    obj2.showD();
    obj2.showE();

    cout << "\n----- MULTIPLE INHERITANCE -----\n";
    Z obj3;
    obj3.showX();
    obj3.showY();
    obj3.showZ();

    cout << "\n----- HIERARCHICAL INHERITANCE -----\n";
    Q obj4;
    R obj5;
    obj4.showP();
    obj4.showQ();
    obj5.showP();
    obj5.showR();

    return 0;
}