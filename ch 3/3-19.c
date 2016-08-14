#include <stdio.h>

main()
{

    float aSales;
    while (1) {

        printf("\nEnter the amount of sales (-1, to end): ");
        scanf("%f", &aSales);
        if (aSales == -1)
            break;
        printf("Salary: $%.2f", aSales * 9 / 100 + 200);
    }
    return 0;
}