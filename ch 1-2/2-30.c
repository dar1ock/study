#include <stdio.h>

main()
{

    int a;
    int n1, n2, n3, n4, n5;

    printf("Enter a five-digit integer: ");
    scanf("%d", &a);

    n1 = a / 10000;
    n2 = (a / 1000) % 10;
    n3 = (a / 100) % 10;
    n4 = (a / 10) % 10;
    n5 = a % 10;

    printf("\n%d %d %d %d %d", n1, n2, n3, n4, n5);

    return 0;
}