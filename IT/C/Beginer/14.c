#include <stdio.h>
#include <math.h>

 int main()
{
    float L, π = 3.14;

    printf("L:");
    scanf("%f", &L);

    float R = L/(2*π);
    printf("R:%f\n", R);

    float S = π * pow(R,2);
        printf("S:%f\n", S);

    return 0;
}