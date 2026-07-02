#include <stdio.h>
#include <stdlib.h>

// Function to find the nth Fibonacci number iteratively
unsigned long long fibonacci(int n) {
    if (n == 1) return 0; // 1st Fibonacci number
    if (n == 2) return 1; // 2nd Fibonacci number

    unsigned long long a = 0, b = 1, next;
    for (int i = 3; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;

    printf("Enter the position (n) of Fibonacci number: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    unsigned long long result = fibonacci(n);
    printf("The %d-th Fibonacci number is: %llu\n", n, result);

    return 0;
}
