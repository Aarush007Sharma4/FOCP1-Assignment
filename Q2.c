//Construct a C program to find the HCF (Highest Common Factor) of two integers usingiterative or recursive logic — a core operation in optimisation algorithms and cryptographiccomputations.
#include <stdio.h>

int main() {
    int num1, num2, hcf;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Find HCF using iterative logic
    for (int i = 1; i <= num1 && i <= num2; ++i) { // Loop from 1 to the smaller of num1 and num2
        if (num1 % i == 0 && num2 % i == 0) // Check if i is a common factor
            hcf = i;// Update hcf if i is a common factor
    }

    printf("The HCF of %d and %d is %d.\n", num1, num2, hcf);

    return 0;
}
