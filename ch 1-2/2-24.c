#include <stdio.h>

main()
{

    int a;

    printf("Input integer: ");
    scanf("%d", &a);

    if (a % 2 == 0)
        printf("\n%d is even", a);
    else
        printf("\n%d is odd", a);

    return 0;
}