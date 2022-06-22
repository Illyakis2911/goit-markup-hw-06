#include <stdio.h>

int main()
{
    float c;
    printf("Ведіть ціну 1 за кг:");
    scanf("%f", &c);
    float i;
    for (i = 1.1; i <= 2.1; i += 0.1)
    {
        printf("%0.3f kg= %0.1f\n", i, c * i);
    }

    return 0;
}
