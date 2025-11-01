//Design a C program to find the first occurrence of the score “99” in an array, focusing on linear search and data retrieval techniques.
#include <stdio.h>
#include <stdio.h>

int main() {
    int n, i, scores[100];
    int found = -1; // To store index if 99 is found

    printf("Enter the number of scores: ");
    scanf("%d", &n);

    printf("Enter the scores:\n");
    for (i = 0; i < n; i++) { // Input scores from user
        scanf("%d", &scores[i]);
    }

    // Linear search for 99
    for (i = 0; i < n; i++) {
        if (scores[i] == 99) {
            found = i;
            break; // Stop at first occurrence
        }
    }

    if (found != -1) // If 99 was found
        printf("The first occurrence of 99 is at position %d.\n", found + 1);
    else
        printf("Score 99 not found in the list.\n");

    return 0;
}
