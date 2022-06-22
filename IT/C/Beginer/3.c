#include <stdio.h>

main()
{
    float a,b;
    printf("a:");
    scanf("%f", &a);
    printf("b:");
    scanf("%f", &b);

    float S = a * b;
    printf("S:%f\n", S);
    float P = 2* (a * b);
    printf("P:%f\n", P);

    return 0;
}
