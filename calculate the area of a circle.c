#include <stdio.h>
int main() {
    // Write a program that calculates the area of a circle//

    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

       //write the formula to Calculate the area of the circle//

    area = 3.1416 * radius*radius;

    printf("The area of the circle is %.2lf square units.\n", area);

    return 0;
}
