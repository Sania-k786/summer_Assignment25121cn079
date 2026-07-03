#include <stdio.h>
#include <stdlib.h>

// Function to find maximum of two integers
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");

    // Validate input
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter integers only.\n");
        return 1; // Exit with error code
    }

    int maxVal = findMax(num1, num2);

    printf("Maximum of %d and %d is: %d\n", num1, num2, maxVal);

    return 0;
}
