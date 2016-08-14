#include <stdio.h>

main()
{
    int a, b, c;

    printf("Input three different integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("\nSum is %d", a + b + c);
    printf("\nAverage is %d", (a + b + c) / 3);
    printf("\nProduct is %d", a * b * c);
    if (a < b && a < c)
        printf("\nSmallest is %d", a);
    else if (b < a && b < c)
        printf("\nSmallest is %d", b);
    else
        printf("\nSmallest is %d", c);
    if (a > b && a > c)
        printf("\nLargest is %d", a);
    else if (b > a && b > c)
        printf("\nLargest is %d", b);
    else
        printf("\nLargest is %d", c);

}