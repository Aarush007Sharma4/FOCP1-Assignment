//Develop a C program to count the number of prime numbers in an array.
#include <stdio.h>

int main() {
    int n, i, j, count = 0, arr[100];
    int isPrime;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int num = arr[i];
        if (num <= 1) {
            continue;  // not prime
        }

        isPrime = 1;  // assume prime for each number 
        for (j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) { // if number is prime
            count++;// we increment the count because we found a prime number 
        }
    }

    printf("Total prime numbers in the array: %d\n", count);

    return 0;
}
