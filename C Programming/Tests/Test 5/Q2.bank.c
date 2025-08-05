#include <stdio.h>
void deposit(float *balance);
void withdraw(float *balance);
void display(float balance);

int main() {
    float balance = 5000;
    int choice;

    printf("Initial balance:\n", balance);
    printf("Choose an option:\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            deposit(&balance);
            break;
        case 2:
            withdraw(&balance);
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    display(balance);
    return 0;
}
void deposit(float *balance) {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    if (amount > 0) {
        *balance += amount;
        printf("Deposited successfully.\n");
    } else {
        printf("Invalid deposit amount.\n");
    }
}
void withdraw(float *balance) {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    if (*balance < 3000) {
        printf("Can't withdraw. Balance is less than 3000.\n");
    } else if (amount > *balance) {
        printf("Insufficient balance.\n");
    } else {
        *balance -= amount;
        printf("Withdrawal successful.\n");
    }
}
void display(float balance) {
    printf("Updated :%2f\n", balance);
}
