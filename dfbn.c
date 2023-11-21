#include <stdio.h>
int main()

{
    int mathMarks, phyMarks, chemMarks;

    printf("Enter marks in Math: ");
    scanf("%d", &mathMarks);

    printf("Enter marks in Physics: ");
    scanf("%d", &phyMarks);

    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemMarks);

    if ((mathMarks >= 65 &&
     phyMarks >= 55 &&
     chemMarks >= 50 &&
     (mathMarks + phyMarks + chemMarks) >= 190)
    ||
    (mathMarks + phyMarks >= 140)) {
    printf("Congratulations! You are eligible for admission to the professional course.\n");


} else {
    printf("Sorry, you are not eligible for admission to the professional course.\n");
}

    } else {
        printf("Sorry, you are not eligible for admission to the professional course.\n");
    }

    return 0;
}

