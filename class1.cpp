#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;

public:
    void setData(string n, int r) {
        name = n;
        roll = r;
    }

    void showData() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
    }
};

int main() {
    Student s1;
    s1.setData("Meet", 25);
    s1.showData();

    return 0;
}
