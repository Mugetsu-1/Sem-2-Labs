#include <stdio.h>

// Function to calculate a^n using recursion
int power(int a, int n) {
    if (n == 0) {
        return 1; // Base case is 1
    } else {
        return a * power(a, n - 1); 
    }
}

int main() {
    int a, n;
    printf("Enter base number: ");
    scanf("%d", &a);
    printf("Enter exponent number: ");
    scanf("%d", &n);
    
    int result = power(a, n);
    printf("%d^%d = %d\n", a, n, result);
    
    return 0;
}

