#include <stdio.h>

float balance = 1000.0; // Initial balance

void checkBalance() {
    printf("Your current balance is: $%.2f\n", balance);
}

void withdraw() {
    float amount;
    printf("Enter the amount to withdraw: $");
    scanf("%f", &amount);

    if (amount > balance) {
        printf("Insufficient funds. Withdrawal failed.\n");
    } else {
        balance -= amount;
        printf("Withdrawal successful. Remaining balance: $%.2f\n", balance);
    }
}

void deposit() {
    float amount;
    printf("Enter the amount to deposit: $");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount. Deposit failed.\n");
    } else {
        balance += amount;
        printf("Deposit successful. Current balance: $%.2f\n", balance);
    }
}

int main() {
    int choice;

    printf("Welcome to the Simple ATM Interface\n");

    while (1) {
        printf("\nSelect an option:\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Funds\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                deposit();
                break;
            case 4:
                printf("Exiting ATM. Thank you!\n");
                return 0;
            default:
                printf("Invalid choice. Please select a valid option.\n");
                break;
        }
    }

    return 0;
}
