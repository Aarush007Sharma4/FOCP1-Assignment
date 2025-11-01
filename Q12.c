//Develop a C program to find the maximum and minimum scores in an array, applying comparative logic for ranking and analysis.
#include <stdio.h>
int main() {
    int n, i;
    int scores[100];
    int max, min;

    // Input number of scores
    printf("Enter the number of scores: ");
    scanf("%d", &n);

    // Input scores from user
    printf("Enter the scores:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    // Initialize max and min with the first score
    max = scores[0];
    min = scores[0];

    // Traverse the scores to find max and min
    for (i = 1; i < n; i++) {
        if (scores[i] > max) {
            max = scores[i]; // Update max if current score is greater
        }
        if (scores[i] < min) {
            min = scores[i]; // Update min if current score is smaller
        }
    }

    // Output the maximum and minimum scores
    printf("Maximum score: %d\n", max);
    printf("Minimum score: %d\n", min);

    return 0;
}