//Design a C program to delete an element from the front, middle, or end of an array, and print the array before and after deletion.
#include <stdio.h>
int main() {
    int n, i, arr[100], position, mid;

    // Input number of elements
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print original array
    printf("Original array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Input position for deletion
    printf("Choose position to delete element:\n");
    printf("1. Front\n");
    printf("2. Middle\n");
    printf("3. End\n");
    printf("Enter choice (1, 2, or 3): ");
    scanf("%d", &position);

    // Delete element based on chosen position
    if (position == 1) {
        // Delete from front
        for (i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    } else if (position == 2) {
        // Delete from middle
        mid = n / 2;
        for (i = mid; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    } else if (position == 3) {
        // Delete from end
        n--;
    } else {
        printf("Invalid position choice.\n");
        return 0;
    }

    // Print modified array
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}