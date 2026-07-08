#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256  // Total possible ASCII characters

// Function to find the first repeating character
char firstRepeatingChar(const char *str) {
    int freq[ASCII_SIZE] = {0}; // Frequency array initialized to 0

    // First pass: count occurrences
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Second pass: find the first character with frequency > 1
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > 1) {
            return str[i];
        }
    }

    return '\0'; // No repeating character found
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    char result = firstRepeatingChar(str);

    if (result != '\0') {
        printf("First repeating character: '%c'\n", result);
    } else {
        printf("No repeating characters found.\n");
    }

    return 0;
}
