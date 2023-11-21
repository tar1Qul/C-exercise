/* Write a C program to find whether a given year is a leap year or not. */

#include <stdio.h>
int main()

{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);


    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leapr.\n", year);
     else
        printf("%d is not a leao year .\n", year);


    return 0;
}


