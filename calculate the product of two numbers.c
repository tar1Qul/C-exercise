
#include <stdio.h>
int main()

 {
     //write a program that calculate the product of two numbers//

    double num1, num2, product;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Calculate the product
    product = num1 * num2;

    printf("The product of %.lf and %.lf is %.lf\n", num1, num2, product);

    return 0;
}
