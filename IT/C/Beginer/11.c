
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    float a, b;

    printf("a:");
    scanf("%f", &a);
    printf("b:");
    scanf("%f", &b);

    printf("%f\n", abs(a) + (b));
    printf("%f\n", abs(a) - (b));
    printf("%f\n", abs(a) * (b));
    printf("%f\n", abs(a) / abs(b));

    return 0;
}
