
#include <stdio.h>

// Function to evaluate the grade based on the score
char evaluateGrade(int score) {
    if (score >= 90 && score <= 100) {
        return 'A';
    } else if (score >= 80 && score < 90) {
        return 'B';
    } else if (score >= 70 && score < 80) {
        return 'C';
    } else if (score >= 60 && score < 70) {
        return 'D';
    } else if (score >= 0 && score < 60) {
        return 'F';
    } else {
        return 'X'; // Return 'X' for scores out of range
    }
}

int main() {
    int score;

    printf("Enter the score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Invalid score entered!\n");
    } else {
        char grade = evaluateGrade(score);
        printf("Grade: %c\n", grade);
    }

    return 0;
}
