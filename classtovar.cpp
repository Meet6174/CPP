#include<iostream>
using namespace std;

class Marks {
    int score;
public:
    Marks(int s) {
        score = s;
    }

    operator int() {
        return score;
    }
};

int main() {
    Marks student(90);
    int m = student;
    cout << "Marks: " << m << endl;
    return 0;
}
