//Implement a C program to insert an element at the front, middle, or end of an array, and print the array before and after insertion.
// written with the help of AI but I can explain the code line wise
#include <stdio.h>
int main() {
    int n, i, arr[100], position, element, mid;

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

    // Input position for insertion
    printf("Choose position to insert element:\n");
    printf("1. Front\n");
    printf("2. Middle\n");
    printf("3. End\n");
    printf("Enter choice (1, 2, or 3): ");
    scanf("%d", &position);

    // Input element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Insert element based on chosen position
    if (position == 1) {
        // Insert at front
        for (i = n; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = element;
        n++;
    } else if (position == 2) {
        // Insert at middle
        mid = n / 2;
        for (i = n; i > mid; i--) {
            arr[i] = arr[i - 1];
        }
        arr[mid] = element;
        n++;
    } else if (position == 3) {
        // Insert at end
        arr[n] = element;
        n++;
    } else {
        printf("Invalid position choice.\n");
        return 0;
    }

    // Print modified array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}