#include <stdio.h>

main()
{

    printf("N\t\t10*N\t\t100*N\t\t1000*N\n");

    for(int i = 1; i <= 10; i++)
    {
        printf("\n%d\t\t%d\t\t%d\t\t%d", i, i * 10, i * 100, i * 1000);
    }

    return 0;
}