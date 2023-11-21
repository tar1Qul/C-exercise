#include <stdio.h>
int main() {

char operation;

printf("Enter Operation(Add/Delete/Search): ");
scanf("%c",&operation);

switch (operation)

{
    case 'A': printf("Enter name:\nEnter Phone Number: ");

int number;
scanf("%d",&number);

if(number<999999999)
{
printf("Contact Added Successfully");
}
else
{
printf("Invalid Phone Number");
}

break;

case 'D':printf("Enter Number:");

int numberd;
scanf("%d", &numberd);

if (number<999999999)
{
printf("Deletd Successfully");
}

else
{
printf("Invalid Number");
}
break;

case 'S':printf("Enter Number:");

int numbers;

scanf("%d",&numberd);
if(numberd<9999999999)
{
    printf("Number Found");
}

else {
    printf("Invalid Number");
    }

    break;

default :printf("Invalid Operation");
}

return 0;


}







