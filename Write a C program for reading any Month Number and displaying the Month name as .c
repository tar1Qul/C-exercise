
/* Write a C program for reading any Month Number and displaying the Month name as
a word */

#include <stdio.h>
int main()

{
    int monthNumber;

    printf("Enter a month number (1-12): ");
    scanf("%d", &monthNumber);

    if (monthNumber < 1 || monthNumber > 12) {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
    } else {

        char *months[50] = {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };

        printf("The month is: %s\n", months[monthNumber - 1]);
    }

    return 0;
}
