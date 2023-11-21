#include<stdio.h>
int main()
{
  //write a program to convert inches into centimeters//

  float inch, cm;

    printf("Enter length in Inch: ");
    scanf("%f", &inch);

    cm = inch * 2.54;

    printf("Equivalent length in Centimeters = %.2f", cm);

    return 0;
}










