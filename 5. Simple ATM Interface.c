#include <stdio.h>
int main(){

    printf("Operation(Check Balance/Withdraw/Deposit):");
    char operation;
    scanf("%c",&operation);

    switch(operation){

        case 'C':
        printf("Enter account number:");
        int acnumber;
        scanf("%d",&acnumber);
        if(acnumber>1000000&&acnumber<99999999){
            printf("Your balance is 1000 BDT");
            }
         else{
             printf("Account Number Is Invalid");
         }
         break;


         case 'W':
        printf("Enter Amount:");
        int wamount;
        scanf("%d",&wamount);
        if(wamount>=0){
            printf("Withdraw Successfully");
        }
        else{
            printf("Invalid Amount");break;

         case 'D':
         printf("Enter Amount:");
         int amount;
         scanf("%d",&amount);
         switch (amount){
             case 1:
              printf("Amount Deposited Successfylly");break;
         }
    }
    }
return 0;
}
