#include <stdio.h>

main()
{
    int a, b;

    printf("Input two different integers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("\n%d is larger", a);
    else if (a < b)
        printf("\n%d is larger", b);
    else
        printf("\nThese numbers are equal");

    return 0;
}