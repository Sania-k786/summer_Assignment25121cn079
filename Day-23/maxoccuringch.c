#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ASCII_SIZE 256  // Total possible ASCII characters

// Function to find the maximum occurring character
char getMaxOccurringChar(const char *str) {
    int freq[ASCII_SIZE] = {0}; // Frequency array
    int maxCount = 0;
    char maxChar = '\0';

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];
        freq[ch]++;
        if (freq[ch] > maxCount) {
            maxCount = freq[ch];
            maxChar = ch;
        }
    }

    return maxChar;
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline from fgets
    str[strcspn(str, "\n")] = '\0';

    if (strlen(str) == 0) {
        printf("Empty string entered.\n");
        return 1;
    }

    char result = getMaxOccurringChar(str);
    printf("Maximum occurring character: '%c'\n", result);

    return 0;
}
