#include <stdio.h>
#include <math.h>

int main()
{
    float kat_a,kat_b,gip_c,Perim;
    printf("kat_a=");
    scanf("%f", &kat_a);
    printf("kat_b=");
    scanf("%f", &kat_b);

    gip_c = sqrt(kat_a * kat_a + kat_b * kat_b);

    Perim = kat_a + kat_b + gip_c;


    printf("Perim=%g", Perim);

}