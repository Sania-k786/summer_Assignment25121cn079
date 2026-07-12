#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to find the longest word in a string
void findLongestWord(const char *str, char *longestWord) {
    int maxLen = 0, currentLen = 0;
    char currentWord[100] = "";
    int i = 0;

    while (1) {
        char ch = str[i];

        if (isalpha(ch)) { // Part of a word
            currentWord[currentLen++] = ch;
        } else {
            if (currentLen > 0) { // End of a word
                currentWord[currentLen] = '\0';
                if (currentLen > maxLen) {
                    maxLen = currentLen;
                    strcpy(longestWord, currentWord);
                }
                currentLen = 0;
            }
            if (ch == '\0') break; // End of string
        }
        i++;
    }
}

int main() {
    char str[200];
    char longestWord[100] = "";

    printf("Enter a sentence: ");
    if (!fgets(str, sizeof(str), stdin)) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    if (strlen(str) == 0) {
        printf("Empty string entered.\n");
        return 0;
    }

    findLongestWord(str, longestWord);

    if (strlen(longestWord) > 0) {
        printf("Longest word: %s\n", longestWord);
        printf("Length: %zu\n", strlen(longestWord));
    } else {
        printf("No valid word found.\n");
    }

    return 0;
}
