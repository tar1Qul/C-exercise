/* Question: Create a C program that takes the principal amount, rate of
interest, and time as input, calculates the simple interest, and displays
it */

#include <stdio.h>
int main()
{
    double principle, time, rate, SI;

    /* Input principle, rate and time */
    printf("Enter principle (amount): ");
    scanf("%lf", &principle);

    printf("Enter time: ");
    scanf("%lf", &time);

    printf("Enter rate: ");
    scanf("%lf", &rate);

    // Calculate simple interest //
    SI = (principle * time * rate) / 100;

    // Print the resultant value of SI //
    printf("Simple Interest = %.lf", SI);

    return 0;
}
