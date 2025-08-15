#include<iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "From A" << endl;
    }
};

class B : public A {
public:
    void bFun() {
        cout << "B class" << endl;
    }
};

class C : public A {
public:
    void cFun() {
        cout << "C class" << endl;
    }
};

int main() {
    B b;
    C c;
    b.show();
    b.bFun();
    c.show();
    c.cFun();
    return 0;
}
