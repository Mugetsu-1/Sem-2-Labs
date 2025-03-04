#include <iostream>
using namespace std;

template <typename T>
T findMin(T arr[], int size) {
    T min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int intArr[] = {4, 2, 8, 6, 1};
    double doubleArr[] = {4.5, 2.1, 8.3, 6.7, 1.2};

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    double doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);

    cout << "Minimum value in int array: " << findMin(intArr, intSize) << endl;
    cout << "Minimum value in double array: " << findMin(doubleArr, doubleSize) << endl;

    return 0;
}

