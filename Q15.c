//Write a C program to cyclically rotate the array clockwise by one position, applying array transformation logic used in scheduling and encryption.
#include <stdio.h>
int main() {
    int n, i, arr[100], last;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Store the last element
    last = arr[n - 1];

    // Shift elements to the right
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Place the last element at the first position
    arr[0] = last;

    // Output the rotated array
    printf("Array after cyclic rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}