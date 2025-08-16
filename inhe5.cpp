#include<iostream>
using namespace std;

class A {
public:
    void aFun() {
        cout << "From A" << endl;
    }
};

class B : public A {
public:
    void bFun() {
        cout << "From B" << endl;
    }
};

class C {
public:
    void cFun() {
        cout << "From C" << endl;
    }
};

class D : public B, public C {
public:
    void dFun() {
        cout << "From D" << endl;
    }
};

int main() {
    D d;
    d.aFun();
    d.bFun();
    d.cFun();
    d.dFun();
    return 0;
}
