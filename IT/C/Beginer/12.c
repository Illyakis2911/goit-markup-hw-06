#include <stdio.h>
#include <math.h>

main()
{
    float kat_a, kat_b;

    printf("kat_a:");
    scanf("%f", &kat_a);
    printf("kat_b:");
    scanf("%f", &kat_b);

    float gip_c = sqrt (kat_a * kat_a) + (kat_b * kat_b);
        printf("gip_c:%f\n", gip_c);
    float P = kat_a + kat_b + gip_c;
     printf ("P:%f", P);

            return 0;
}
