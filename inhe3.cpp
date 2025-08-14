#include<iostream>
using namespace std;

class A {
public:
    void f1() {
        cout << "From A" << endl;
    }
};

class B {
public:
    void f2() {
        cout << "From B" << endl;
    }
};

class C : public A, public B {
public:
    void f3() {
        cout << "From C" << endl;
    }
};

int main() {
    C c;
    c.f1();
    c.f2();
    c.f3();
    return 0;
}
