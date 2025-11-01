//Develop a C program to generate the Fibonacci series up to ‘n’ terms, where each term is the sum of the two preceding ones.
//0, 1, 1, 2, 3, 5, 8, 13, ...
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;  // First two terms are 0 and 1
        else {
            next = a + b;  // Sum of previous two terms
            a = b;
            b = next;
        }
        printf("%d ", next);
    }

    return 0;
}
