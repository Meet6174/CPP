#include <iostream>
using namespace std;

class Box {
private:
    int l, w, h;

public:
    Box(int x, int y, int z) {
        l = x;
        w = y;
        h = z;
    }

    friend void compare(Box a, Box b);
};

void compare(Box a, Box b) {
    int v1 = a.l * a.w * a.h;
    int v2 = b.l * b.w * b.h;

    cout << "Box A: " << v1 << endl;
    cout << "Box B: " << v2 << endl;

    if (v1 > v2)
        cout << "Box A is bigger\n";
    else if (v2 > v1)
        cout << "Box B is bigger\n";
    else
        cout << "Both are equal\n";
}

int main() {
    Box a(3, 4, 5);
    Box b(2, 5, 6);
    compare(a, b);
    return 0;
}
