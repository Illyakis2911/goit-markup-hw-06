#include <stdio.h>
#include <math.h>

main()
{
    float R1, R2, π =3.14;

    printf("R1:");
    scanf("%f", &R1);
    printf("R2:");
    scanf("%f", &R2);

    float S1  = π * pow(R1,2);
    printf("S1:%f\n", S1);

    float S2 = π * pow(R2,2) ;
    printf("S2:%f\n", S2);

    float S3 = S1-S2;
    printf("S3:%f\n", S3);

    return 0;
}