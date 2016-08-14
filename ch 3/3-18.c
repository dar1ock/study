#include <stdio.h>

main()
{

    int account;
    float iBalance, tAmount, lAmount, cLimit;

    while (1) {

        printf("\nEnter the account number (-1, to end): ");
        scanf("%d", &account);
        if (account == -1)
            break;
        printf("Enter the initial balance: ");
        scanf("%f", &iBalance);
        printf("Enter the amount of expenses: ");
        scanf("%f", &tAmount);
        printf("Enter the amount of the loan: ");
        scanf("%f", &lAmount);
        printf("Enter the amount of credit limit: ");
        scanf("%f", &cLimit);

        if ((iBalance + tAmount - lAmount) > cLimit ) {
            printf("\nAccount: %d", account);
            printf("\nThe amount of credit limit: %.2f", cLimit);
            printf("\nBalance: %.2f", iBalance + tAmount - lAmount);
            printf("\nThe credit limit is exceeded.");
        }
    }

    return 0;
}