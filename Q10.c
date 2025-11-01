//Implement a program to find who and how many students scored “99” in the marks array, emphasising data scanning and frequency counting.
#include <stdio.h>
int main() {
    int n, i, scores[100];
    int count = 0; // To count occurrences of score 99

    printf("Enter the number of students: ");
    scanf("%d", &n);

    printf("Enter the scores of the students:\n");
    for (i = 0; i < n; i++) { // Input scores from user
        scanf("%d", &scores[i]);
    }

    // Count occurrences of 99
    for (i = 0; i < n; i++) {
        if (scores[i] == 99) {
            count++;
        }
    }

    if (count > 0) // If 99 was found
        printf("Number of students who scored 99: %d\n", count);
    else
        printf("No student scored 99.\n");

    return 0;
}