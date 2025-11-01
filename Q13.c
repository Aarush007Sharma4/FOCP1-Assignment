//Design a C program to find a peak element that is not smaller than its neighbours.
#include <stdio.h>

int main() {
    int n, i, arr[100];

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peakIndex = -1;  // to store the index of the first peak element

    // Find the first peak element
    for (i = 0; i < n; i++) {
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == n - 1 || arr[i] >= arr[i + 1])) {
            peakIndex = i;
            break;
        }
    }

    // Display result
    if (peakIndex != -1)
        printf("Peak element found at index %d with value %d\n", peakIndex, arr[peakIndex]);
    else
        printf("No peak element found\n");

    return 0;
}


