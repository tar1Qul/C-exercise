
#include<stdio.h>
int main ()

{

double num;

printf("please enter a number: ");
scanf("%lf", &num);

if(num <= 0)
    {
        printf("the number is negative");
    }
else if(num>=0)
{
    printf("the number is positive");
}
else {printf("the number is 0");}

return 0;
}
