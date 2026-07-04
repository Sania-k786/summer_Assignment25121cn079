#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to find and print all pairs with the given sum
void findPairsWithSum(int arr[], int n, int target) {
    bool found = false;

    // Check all pairs using nested loops
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                found = true;
            }
        }
    }

    if (!found) {
        printf("No pairs found with sum %d.\n", target);
    }
}

int main() {
    int n, target;

    // Input array size
    printf("Enter number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size. Please enter a positive integer.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            free(arr);
            return 1;
        }
    }

    // Input target sum
    printf("Enter target sum: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        free(arr);
        return 1;
    }

    // Find and print pairs
    findPairsWithSum(arr, n, target);

    free(arr);
    return 0;
}
