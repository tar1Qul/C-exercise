/*Write a C program that takes two numbers as input,
performs addition, subtraction, multiplication, and division operations,
and displays the results*/

#include <stdio.h>
int main()

{
    double num1, num2, sum, difference, product, quotient, modulo;

    printf("Enter the first number: \n");
    scanf("%lf", &num1);

    printf("Enter the second number: \n");
    scanf("%lf", &num2);


    printf("Sum: %.lf\n", sum = num1 + num2);
    printf("Difference: %.lf\n", difference = num1 - num2);
    printf("Product: %.lf\n",  product = num1 * num2);
    printf("Quotient: %.lf\n", quotient = num1 / num2)
    printf("Remainder: %.lf\n",  modulo = fmod(num1, num2));

    return 0;
}
