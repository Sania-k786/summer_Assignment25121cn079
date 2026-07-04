#include <stdio.h>
#include <stdlib.h>

// Iterative Binary Search
int binarySearchIterative(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Prevents overflow

        if (arr[mid] == target)
            return mid; // Found at index mid
        else if (arr[mid] < target)
            low = mid + 1; // Search right half
        else
            high = mid - 1; // Search left half
    }
    return -1; // Not found
}

// Recursive Binary Search
int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high)
        return -1; // Not found

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, high, target);
    else
        return binarySearchRecursive(arr, low, mid - 1, target);
}

int main() {
    int n, target;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d sorted integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Enter element to search: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Iterative Search
    int resultIter = binarySearchIterative(arr, n, target);
    if (resultIter != -1)
        printf("[Iterative] Element found at index %d\n", resultIter);
    else
        printf("[Iterative] Element not found.\n");

    // Recursive Search
    int resultRec = binarySearchRecursive(arr, 0, n - 1, target);
    if (resultRec != -1)
        printf("[Recursive] Element found at index %d\n", resultRec);
    else
        printf("[Recursive] Element not found.\n");

    return 0;
}
