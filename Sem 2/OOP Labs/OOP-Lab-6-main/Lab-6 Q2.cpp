#include <iostream>
using namespace std;

// Template function to sum the elements of an array
template <typename T>
T sumArray(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    // Test with an array of integers
    int intArr[] = {1, 2, 3, 4, 5};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    cout << "Sum of integer array: " << sumArray(intArr, intSize) << endl;

    // Test with an array of floats
    float floatArr[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);
    cout << "Sum of float array: " << sumArray(floatArr, floatSize) << endl;

    return 0;
}

