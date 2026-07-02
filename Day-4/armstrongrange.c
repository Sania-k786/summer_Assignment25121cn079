#include <stdio.h>
#include <math.h>   // For pow() function
#include <stdlib.h> // For abs()

// Function to check if a number is Armstrong
int isArmstrong(int num) {
    if (num < 0) return 0; // Armstrong numbers are non-negative

    int originalNum = num;
    int sum = 0;
    int digits = 0;

    // Count digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate sum of digits raised to the power of digits
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int start, end;

    printf("Enter start and end of range: ");
    if (scanf("%d %d", &start, &end) != 2) {
        printf("Invalid input. Please enter integers only.\n");
        return 1;
    }

    if (start > end) {
        printf("Invalid range. Start should be less than or equal to end.\n");
        return 1;
    }

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    int found = 0;
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }

    printf("\n");
    return 0;
}
