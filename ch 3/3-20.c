#include <stdio.h>

main()
{

    float lAmount, rate;
    int days;

    while (1) {

        printf("\n\nEnter the amount of the loan (-1, to end): ");
        scanf("%f", &lAmount);
        if (lAmount == -1)
            break;
        printf("Enter the interest rate: ");
        scanf("%f", &rate);
        printf("Enter the term of the loan in days: ");
        scanf("%d", &days);
        printf("Payment of simple interest is: $%.2f", lAmount * days * rate / 365);
    }

    return 0;
}