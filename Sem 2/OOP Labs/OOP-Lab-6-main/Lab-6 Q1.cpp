#include <iostream>
using namespace std;

// Template function to swap two values
template <typename T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Test with int
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    mySwap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    // Test with float
    float a = 1.5f, b = 2.5f;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    mySwap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    // Test with char
    char c1 = 'A', c2 = 'B';
    cout << "Before swap: c1 = " << c1 << ", c2 = " << c2 << endl;
    mySwap(c1, c2);
    cout << "After swap: c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}

