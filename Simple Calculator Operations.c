/*Write a C program that takes two numbers as input,
performs addition, subtraction, multiplication, and division operations,
and displays the results like Simple Calculator Operations*/

#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    char operation;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter operation (+ for addition, - for subtraction, * for multiplication, / for division, %% for remainder): ");
    scanf(" %c", &operation);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch(operation)
    {
        case '+':
            printf("Sum: %.2lf\n", num1 + num2);break;
        case '-':
            printf("Difference: %.2lf\n", num1 - num2);break;
        case '*':
            printf("Product: %.2lf\n", num1 * num2);break;
        case '/':
            if (num2 != 0) {
                printf("Quotient: %.2lf\n", num1 / num2);
            } else {
                printf("Cannot divide by zero\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Remainder: %.2lf\n", fmod(num1, num2));
            } else {
                printf("Cannot perform modulus with zero\n");
            }
            break;
        default:
            printf("Invalid operation entered\n");
    }

    return 0;
}
