#include <stdio.h>
int main() {
    int marks[5];
    int totalMarks = 0;
    float percentage;

    for (int i = 0; i < 5; i++) {
        printf("Enter the marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }

    percentage = (float)totalMarks / 5;

    printf("Total Obtained Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage > 80) {
        printf("Distinction\n");
    } else if (percentage >= 70) {
        printf("First Class\n");
    } else if (percentage >= 50) {
        printf("Second Class\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
