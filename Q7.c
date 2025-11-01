//Develop a C program to print a binary pyramid pattern.
//0 0
//01 01
//010 010
//0101 0101
//0101001010
#include <stdio.h>
int main() {
    int rows, i, j;

    printf("Enter the number of rows for the binary pyramid: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf(" "); // Print leading spaces
        }
        for (j = 1; j <= i; j++) { // Print binary numbers
            printf("%d", (j % 2 == 1) ? 0 : 1);
        }
        for (j = 1; j < i; j++) {// Print binary numbers again for the second half
            printf("%d", (j % 2 == 1) ? 0 : 1);
        }
        printf("\n");// Move to the next line after each row
    }

    return 0;
}
