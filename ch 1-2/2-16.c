#include <stdio.h>

main()
{
    int a, b;

    printf("Input two different integers: ");
    scanf("%d %d", &a, &b);

    printf("\nSum: %d\n", a + b);
    printf("Sibtract: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("Divide: %.2f\n", (float) a / b);
    printf("Abs: %d\n", a % b);

    return 0;
}