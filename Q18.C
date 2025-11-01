//Develop a program to identify and print duplicate elements in an array, or print “-1” if no duplicates exist, applying frequency detection and data validation.
#include <stdio.h>

int main() {
    int n, i, j, arr[100];
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements: ");
    for (i = 0; i < n; i++) {
        int count = 0;

        // Skip already counted duplicates by checking previous elements
        int alreadyCounted = 0;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                alreadyCounted = 1;
                break;
            }
        }

        if (alreadyCounted)
            continue;

        // Count frequency of arr[i]
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        // If frequency > 1, it's a duplicate
        if (count > 1) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found)
        printf("-1");

    printf("\n");
    return 0;
}
