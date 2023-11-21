#include <stdio.h>
int main() {
    int score;

    printf("Enter the score (0-100): ");
    scanf("%d", &score);

    switch (score / 10)
    {
        case 10:printf("GRADE:A+\nOutstanding"); break;
        case 9:printf("GRADE: A\nExcellent "); break;
        case 8:printf("GRADE: B\nGood"); break;
        case 7: printf("GRADE: C\nAverage");break;
        case 6: printf("GRADE: D\nNeed to be better");break;

        default:
            printf("GRADE: F.\nBetter luck next time\n");break;
    }

    return 0;
}
