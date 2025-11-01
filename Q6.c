// Create a C program that allows the user to convert between Binary and Decimal systems based on their choice, showcasing understanding of data encoding and computer number systems used in hardware-level design.
#include <stdio.h>

int main() {
    int choice, num, i;
    char bin[64]; // To hold binary input as a string
    int dec = 0, power = 1;

    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) { // Decimal to Binary
        printf("Enter a decimal number: ");
        scanf("%d", &num);

        int bits[32], j = 0; // Array to hold binary digits

        if (num == 0) { // Special case for 0
            printf("Binary: 0\n");
            return 0;
        }

        while (num > 0) { // Convert to binary
            bits[j] = num % 2;
            num = num / 2;
            j++;
        }

        printf("Binary: "); // Print binary digits in reverse order
        for (i = j - 1; i >= 0; i--) {
            printf("%d", bits[i]);
        }
        printf("\n");
    }
    else if (choice == 2) { // Binary to Decimal
        printf("Enter a binary number: ");
        scanf("%s", bin);

        for (i = 0; bin[i] != '\0'; i++) { // Convert to decimal
            dec = dec * 2 + (bin[i] - '0');
        }

        printf("Decimal: %d\n", dec);
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}



