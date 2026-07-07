#include <stdio.h>
#include <ctype.h>   // For toupper()
#include <string.h>  // For strlen()

int main() {
    char str[100];

    // Prompt user for input
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

    // Convert each character to uppercase
    for (size_t i = 0; str[i] != '\0'; i++) {
        str[i] = (char)toupper((unsigned char)str[i]);
    }

    // Display the result
    printf("Uppercase string: %s\n", str);

    return 0;
}
