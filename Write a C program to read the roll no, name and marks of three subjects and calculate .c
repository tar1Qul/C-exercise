/* Write a C program to read the roll no, name and marks of three subjects and calculate
the total and percentage. */

#include<stdio.h>
int main ()

{
    int roll;
    char name[100];
    double mark1, mark2, mark3, total, percentage;

    printf("Enter the Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Marks in Subject 1: ");
    scanf("%lf", &mark1);

    printf("Enter Marks in Subject 2: ");
    scanf("%lf", &mark2);

    printf("Enter Marks in Subject 3: ");
    scanf("%lf", &mark3);

    total = mark1 + mark2 + mark3;
    percentage = (total / 300) * 100;


    printf("Roll Number: %d \n", roll);
    printf("Name: %s \n", name);
    printf("Total Marks: %.lf \n", total);
    printf("Percentage: %.lf%% \n", percentage);

    return 0 ;
}
