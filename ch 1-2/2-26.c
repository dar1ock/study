#include <stdio.h>

main()
{

    int a, b;

    printf("Input two different integers: ");
    scanf("%d %d", &a, &b);

    if (a % b == 0)
        printf("\n%d is even %d", a, b);
    else
        printf("\n%d is odd %d", a, b);

    return 0;
}