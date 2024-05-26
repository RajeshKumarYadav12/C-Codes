#include <stdio.h>

void printPattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        // Print ascending numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print descending numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int rows;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the specified pattern
    printPattern(rows);

    return 0;
}
