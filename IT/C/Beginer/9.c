#include <stdio.h>
#include <math.h>

main()
{
    float a,b;

    printf("a:");
    scanf("%f", &a);
    printf("b:");
    scanf("%f", &b);

    printf("%f\n", sqrt(a * b));
    return 0;
}
