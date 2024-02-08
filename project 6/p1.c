#include <stdio.h>

void main() 
{
    int choice;

    printf("Welcome to Telecom Call Service\n");


        printf("\nPlease select an option:\n");
        printf("1. Activate new SIM\n");
        printf("2. Recharge balance\n");
        printf("3. Check balance\n");
        printf("4. Make a call\n");
        printf("5. Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nNew SIM activated successfully!\n");
                break;
            case 2:
                printf("\nBalance recharged successfully!\n");
                break;
            case 3:
                printf("\nYour current balance is Rs. 50\n");
                break;
            case 4:
                printf("\nCall in progress...\n");
                printf("Press 1 to end the call\n");
                scanf("%d", &choice);
                switch (choice) {
                    case 1:
                        printf("\nCall ended\n");
                        break;
                    default:
                        printf("\nInvalid input, call terminated\n");
                        break;
                }
                break;
            case 5:
                printf("\nThank you for using Telecom Call Service. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
                break;
        }
}
