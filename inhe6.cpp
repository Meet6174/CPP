#include<iostream>
using namespace std;

class base {
public:
    virtual void show() {
        cout << "from base" << endl;
    }
};

class one : virtual public base {
public:
    void show() override {
        cout << "from one" << endl;
    }
};

class two : virtual public base {
public:
    void show() override {
        cout << "from two" << endl;
    }
};

class final : public one, public two {
public:
    void show() override {
        cout << "from final" << endl;
    }
};

int main() {
    base* b;
    final f;
    b = &f;
    b->show();
    return 0;
}
