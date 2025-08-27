#include<iostream>
using namespace std;

class complex {
    int real, imag;

public:
    complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    bool operator == (complex c) {
        return (real == c.real && imag == c.imag);
    }

    void show() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    complex c1(3, 4);
    complex c2(3, 4);
    complex c3(5, 7);

    c1.show();
    c2.show();
    c3.show();

    if(c1 == c2)
        cout << "c1 and c2 are equal" << endl;
    else
        cout << "c1 and c2 are not equal" << endl;

    if(c1 == c3)
        cout << "c1 and c3 are equal" << endl;
    else
        cout << "c1 and c3 are not equal" << endl;

    return 0;
}
 