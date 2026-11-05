#include <stdio.h>

float balance = 5000.00;

int login() {
    int pin, attempts;

    for (attempts = 1; attempts <= 3; attempts++) {
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        if (pin == 1234) {
            printf("\nLogin successful!\n");
            return 1;
        }
        else {
            printf("Incorrect PIN!\n");
            printf("Remaining attempts: %d\n\n", 3 - attempts);
        }
    }

    printf("Maximum attempts exceeded. Access denied.\n");
    return 0;
}

void checkBalance() {
    printf("\nYour current balance is: Ksh %.2f\n", balance);
}

void deposit(float amount) {
    if (amount > 0) {
        balance = balance + amount;
        printf("Deposit successful!\n");
        printf("New balance: Ksh %.2f\n", balance);
    }
    else {
        printf("Invalid amount! Enter a positive amount.\n");
    }
}

void withdraw(float amount) {
    if (amount <= 0) {
        printf("Invalid amount! Enter a positive amount.\n");
    }
    else if (amount > balance) {
        printf("Insufficient balance!\n");
    }
    else {
        balance = balance - amount;
        printf("Withdrawal successful!\n");
        printf("Remaining balance: Ksh %.2f\n", balance);
    }
}

int main() {
    int choice;
    float amount;

    if (login() == 1) {

        while (1) {
            printf("\n===== ATM MENU =====\n");
            printf("1. Balance Inquiry\n");
            printf("2. Deposit\n");
            printf("3. Withdraw\n");
            printf("4. Exit\n");

            printf("Choose an option: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    checkBalance();
                    break;

                case 2:
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);
                    deposit(amount);
                    break;

                case 3:
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);
                    withdraw(amount);
                    break;

                case 4:
                    printf("Thank you for using our ATM. Goodbye!\n");
                    return 0;

                default:
                    printf("Invalid option! Please try again.\n");
            }
        }
    }

    return 0;
}
