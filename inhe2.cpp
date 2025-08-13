#include<iostream>
using namespace std;

class A {
public:
    void f1() {
        cout << "A class" << endl;
    }
};

class B : public A {
public:
    void f2() {
        cout << "B class" << endl;
    }
};

class C : public B {
public:
    void f3() {
        cout << "C class" << endl;
    }
};

int main() {
    C c;
    c.f1();
    c.f2();
    c.f3();
    return 0;
}
