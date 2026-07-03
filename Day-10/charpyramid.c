#include <stdio.h>
#include <ctype.h> // for isalpha()

int main() {
    int rows;

    printf("Enter number of rows (1-26): ");
    if (scanf("%d", &rows) != 1 || rows < 1 || rows > 26) {
        printf("Invalid input. Please enter an integer between 1 and 26.\n");
        return 1;
    }

    for (int i = 1; i <= rows; i++) {
        // Print ascending characters from 'A'
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        // Print descending characters
        for (int j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
