#include <stdio.h>
#include <stdlib.h>

// Function to print Fibonacci series up to n terms
void printFibonacci(int n) {
    long long first = 0, second = 1, next;
    
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // First two terms: 0, 1
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%lld ", next);
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms: ");
    if (scanf("%d", &terms) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (terms <= 0) {
        printf("Number of terms must be positive.\n");
        return 1;
    }

    printf("Fibonacci Series (%d terms):\n", terms);
    printFibonacci(terms);

    return 0;
}
