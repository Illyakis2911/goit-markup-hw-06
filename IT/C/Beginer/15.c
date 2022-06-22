#include <stdio.h>
#include <math.h>

int main()
{
    float S, π = 3.14;

    printf("S:");
    scanf("%f", &S);

    float D = sqrt((2*S) / π);
    printf("D:%f\n", D);

    float L = π * D;
    printf("L:%f\n", L);

    return 0;
}