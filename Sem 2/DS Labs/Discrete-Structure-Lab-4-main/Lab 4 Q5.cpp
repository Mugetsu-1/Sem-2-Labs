#include <stdio.h>


int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = { 2, 5, 7, 9, 3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key = 7; 

   
    int index = linearSearch(arr, n, key);

    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

