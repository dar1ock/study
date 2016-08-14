#include <stdio.h>

main()
{

    float gMil = 0, gas = 0;
    int distance  = 0, dTravel = 0;

    while (1) {
        printf("Enter gas mileage (-1, to end): ");
        scanf("%f", &gMil);
        if (gMil == -1)
            break;
        gas += gMil;
        printf("Enter the distance traveled: " );
        scanf("%d", &dTravel);
        distance += dTravel;

        printf("Fuel consumption for this refueling: %.4f\n", (float)dTravel / gMil);
    }

    printf("\n\nFuel consumption: %.4f", (float)distance / gas);

    return 0;
}