#include <iostream>
using namespace std;

template <typename T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) : num1(n1), num2(n2) {}

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }

    T multiply() {
        return num1 * num2;
    }

    T divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Division by zero error!" << endl;
            return 0; // Return zero or handle the error as needed
        }
    }
};

int main() {
    Calculator<int> intCalc(10, 5);
    cout << "Int addition: " << intCalc.add() << endl;
    cout << "Int subtraction: " << intCalc.subtract() << endl;
    cout << "Int multiplication: " << intCalc.multiply() << endl;
    cout << "Int division: " << intCalc.divide() << endl;

    Calculator<double> doubleCalc(5.5, 2.2);
    cout << "Double addition: " << doubleCalc.add() << endl;
    cout << "Double subtraction: " << doubleCalc.subtract() << endl;
    cout << "Double multiplication: " << doubleCalc.multiply() << endl;
    cout << "Double division: " << doubleCalc.divide() << endl;

    return 0;
}

