#include<iostream>
using namespace std;

class Meter {
public:
    float m;
    Meter(float val) {
        m = val;
    }
};

class Centimeter {
public:
    float cm;
    Centimeter(Meter x) {
        cm = x.m * 100;
    }

    void show() {
        cout << "Centimeters: " << cm << endl;
    }
};

int main() {
    Meter m(3.2);
    Centimeter c = m;
    c.show();
    return 0;
}
