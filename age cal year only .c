#include <stdio.h>
#include <time.h>

int main() {
    int birthYear;
    int currentYear;
    int age;

    // Get the current year
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    currentYear = tm.tm_year + 1900;

    // Input the birth year
    printf("Enter your birth year: ");
    scanf("%d", &birthYear);

    // Calculate the age
    age = currentYear - birthYear;

    // Display the age
    printf("Your age is: %d years\n", age);

    return 0;
}
