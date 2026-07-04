#include <stdio.h>
#include <stdlib.h>

// Function to print Fibonacci series up to n terms
void printFibonacci(int n) {
    long long first = 0, second = 1, next;
    
    if (n <= 0) {
        printf("Number of terms must be positive.\n");
        return;
    }

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld ", first);
            continue;
        }
        if (i == 2) {
            printf("%lld ", second);
            continue;
        }
        next = first + second;
        printf("%lld ", next);
        first = second;
        second = next;
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

    printFibonacci(terms);

    return 0;
}
