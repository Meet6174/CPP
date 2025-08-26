#include<iostream>
using namespace std;

class point {
    int x, y;

public:
    point(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    point operator + (point p) {
        return point(x + p.x, y + p.y);
    }

    void show() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    point p1(3, 4), p2(1, 2);
    point p3 = p1 + p2;

    p1.show();
    p2.show();
    p3.show();

    return 0;
}
