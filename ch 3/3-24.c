#include  <stdio.h>

main()
{

    int counter = 0, number, largest=0;

    while (counter < 10) {
        printf("Enter integer: ");
        scanf("%d", &number);

        if (number >= largest)
            largest = number;

        counter++;
    }

    printf("The largest integer is: %d", largest);

    return 0;
}