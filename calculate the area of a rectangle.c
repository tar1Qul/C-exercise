#include <stdio.h>
int main() {

    //write program that calculates the area of a rectangle//

    double length,width , area;

    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);

    //write the formula to Calculate the area of the rectangle//
    area = length * width;

   printf("The area of the rectangle is %.2lf square units.\n", area);

    return 0;
}

