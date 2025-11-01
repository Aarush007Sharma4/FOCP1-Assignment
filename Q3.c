//Design a C program to subtract two integers without using the minus (-) operator, applyingbitwise operators. Highlight how such logic can be used in low-level arithmetic operations in embeded systems or processors.\

#include <stdio.h>
int subtract(int a, int b) {
    while (b != 0) {
        int borrow = (~a) & b; // Calculate borrow
        a = a ^ b;             // Subtract without borrow
        b = borrow << 1;       // Shift borrow to the left
    }
    return a;
}
/*
int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Result of %d - %d = %d\n", num1, num2, subtract(num1, num2));

    return 0;
}*/