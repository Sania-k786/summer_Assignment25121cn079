#include <stdio.h>
#include <stdlib.h>

// Function to count set bits using Brian Kernighan's Algorithm
int countSetBits(unsigned int n) {
    int count = 0;
    while (n) {
        n &= (n - 1); // Clear the least significant set bit
        count++;
    }
    return count;
}

int main() {
    unsigned int num;

    printf("Enter a non-negative integer: ");
    // Input validation
    if (scanf("%u", &num) != 1) {
        printf("Invalid input. Please enter a valid non-negative integer.\n");
        return 1;
    }

    int result = countSetBits(num);
    printf("Number of set bits in %u is: %d\n", num, result);

    return 0;
}
