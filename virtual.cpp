#include<iostream>
using namespace std;

class animal {
public:
    virtual void speak() {
        cout << "animal sound" << endl;
    }
};

class dog : public animal {
public:
    void speak() override {
        cout << "dog barks" << endl;
    }
};

class cat : public animal {
public:
    void speak() override {
        cout << "cat meows" << endl;
    }
};

int main() {
    animal* a;
    dog d;
    cat c;

    a = &d;
    a->speak();

    a = &c;
    a->speak();

    return 0;
}
