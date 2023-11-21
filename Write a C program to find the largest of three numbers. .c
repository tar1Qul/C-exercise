/* Write a C program to find the largest of three numbers. */

#include <stdio.h>
int main()

{
    double num1, num2, num3;

    printf("Enter the first numbers: ");
    scanf("%lf" ,  &num1 );
    printf("Enter the second number: ");
    scanf("%lf", &num2 );
    printf("Enter the last number: ");
    scanf("%lf", &num3);

    if (num1 >= num2 && num1 >= num3)
        {
            printf("The largest number is %.lf\n", num1);
        }
    else if (num2 >= num1 && num2 >= num3)
        {
            printf("The largest number is %.lf\n", num2);
        }
    else
        {
            printf("The latgest number is %.lf\n", num3);
        }

    return 0;
}
