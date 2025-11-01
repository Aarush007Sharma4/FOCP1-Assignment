//Develop a C program to check whether a given number is an Armstrong number or not, demonstrating understanding of number manipulation and digit-based computations used in digital verification systems. 
#include <stdio.h>
#include <math.h>
int main() {
    int num, originalNum, remainder, n = 0;
    double sum = 0.0;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the nth powers of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if ((int)sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}