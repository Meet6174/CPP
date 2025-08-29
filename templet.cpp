#include <iostream>
using namespace std;

template <typename T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << maxValue(10, 20) << endl;       
    cout << maxValue(3.5, 2.1) << endl;      
    cout << maxValue('a', 'z') << endl;     
    return 0;
}
