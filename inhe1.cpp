#include<iostream>
using namespace std;

class A {
public:
    void f1() {
        cout << "Base class function" << endl;
    }
};

class B : public A {
public:
    void f2() {
        cout << "Derived class function" << endl;
    }
};

int main() {
    B b;
    b.f1();
    b.f2();
    return 0;
}
