#include <stdio.h>

struct Bank {
    int accNo;
    char name[50];
    float balance;
};

int main() {

    struct Bank b;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &b.accNo);

    printf("Enter Name: ");
    scanf("%s", b.name);

    b.balance = 0;

    while(1) {

        printf("\n===== BANK MENU =====\n");

        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Balance Enquiry\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Amount: ");
                scanf("%f", &amount);

                b.balance += amount;

                printf("Amount Deposited Successfully\n");
                break;

            case 2:
                printf("Enter Amount: ");
                scanf("%f", &amount);

                if(amount <= b.balance) {
                    b.balance -= amount;
                    printf("Withdrawal Successful\n");
                } else {
                    printf("Insufficient Balance\n");
                }
                break;

            case 3:
                printf("Current Balance = %.2f\n", b.balance);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice");
        }
    }
}