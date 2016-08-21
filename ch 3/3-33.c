#include <stdio.h>

main()
{
    int s;

    printf("Enter integer: ");
    scanf("%d", &s);

    for(int i = 0; i < s; i++)
    {
        printf("\n");

        for(int j = 0; j < s; j++)
            printf("* ");
    }
    return 0;
}