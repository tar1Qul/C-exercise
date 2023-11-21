#include <stdio.h>
int main(){
    printf("Welcome to ULAB Gadget Store\n");
    printf("Select Catagory:");
    char catagory;
    scanf("%c",&catagory);

    switch(catagory)
    {
        case 'S':printf("Select Product:");
       char product;
       scanf(" %c",&product); break;

       switch(product)
       {
           case 'I':printf("Specification:3 Apple devices with camera\nA1 quality Camera\nA1 quality  video\nBut Worst Battery Backup\n");
           printf("Price:2999USD");break;
       }
       default:printf("Invalid");
    }
  return 0;
}
