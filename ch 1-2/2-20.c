#include <stdio.h>

main()
{
    int r;

    printf("Input radius: ");
    scanf("%d", &r);

    printf("\nDiameter: %d", 2 * r);
    printf("\nPepimeter: %.4f", 2 * 3.14159 * r);
    printf("\nArea: %.4f", 3.14159 * r * r );

    return 0;
}