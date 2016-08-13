#include <stdio.h>

main()
{
    int a, b;

    printf("Введите 2а числа: ");
    scanf("%d %d", &a, &b);

    printf("\nСумма: %d\n", a + b);
    printf("Разность: %d\n", a - b);
    printf("Произведение: %d\n", a * b);
    printf("Частное: %.2f\n", (float) a / b);
    printf("По модулю: %d\n", a % b);

    return 0;
}