#include <stdio.h>

main()
{
    float R,π=3.14;

    printf("R:");
    scanf("%f", &R);

    float L = 2*π*R;
    printf("L:%f\n", L);
    float S = 2*R*R;
    printf("S:%f\n", S);

    return 0;
}
