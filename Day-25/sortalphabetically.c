#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAMES 100     // Maximum number of names
#define MAX_LENGTH 100    // Maximum length of each name

// Comparison function for qsort
int compareNames(const void *a, const void *b) {
    const char *nameA = *(const char **)a;
    const char *nameB = *(const char **)b;
    return strcmp(nameA, nameB); // Lexicographical comparison
}

int main() {
    char *names[MAX_NAMES];
    int n;

    printf("Enter number of names (max %d): ", MAX_NAMES);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_NAMES) {
        printf("Invalid number of names.\n");
        return 1;
    }

    // Clear newline left in buffer
    getchar();

    // Input names
    for (int i = 0; i < n; i++) {
        char buffer[MAX_LENGTH];
        printf("Enter name %d: ", i + 1);

        if (!fgets(buffer, sizeof(buffer), stdin)) {
            printf("Error reading name.\n");
            return 1;
        }

        // Remove trailing newline
        buffer[strcspn(buffer, "\n")] = '\0';

        // Allocate memory for each name
        names[i] = malloc(strlen(buffer) + 1);
        if (!names[i]) {
            printf("Memory allocation failed.\n");
            return 1;
        }
        strcpy(names[i], buffer);
    }

    // Sort names alphabetically
    qsort(names, n, sizeof(char *), compareNames);

    // Display sorted names
    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
        free(names[i]); // Free allocated memory
    }

    return 0;
}
