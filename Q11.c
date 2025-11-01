//Develop a C program to traverse an array of scores, determine whether each score is even or odd using conditional logic, and store them into two separate arrays — even_array and odd_array.
#include <stdio.h>
int main() {
    int n, i;
    int scores[100];
    int even_array[100], odd_array[100];
    int even_count = 0, odd_count = 0;

    // Input number of scores
    printf("Enter the number of scores: ");
    scanf("%d", &n);

    // Input scores from user
    printf("Enter the scores:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Traverse the scores and separate even and odd
    for (i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even_array[even_count++] = scores[i]; // Store in even_array
        } else {
            odd_array[odd_count++] = scores[i];   // Store in odd_array
        }
    }

    // Output even scores
    printf("Even scores:\n");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }
    printf("\n");

    // Output odd scores
    printf("Odd scores:\n");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }
    printf("\n");

    return 0;
}