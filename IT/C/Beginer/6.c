#include <stdio.h>

main()
{
    float a,b,c;

    printf("a:");
    scanf("%f", &a);
    printf("b:");
    scanf("%f", &b);
    printf("c:");
    scanf("%f", &c);

    float V = V = a*b*c;
        printf("V:%f\n", V);
        float S = 2*(a*b+b*c+a*c);
        printf("S:%f\n", S);

        return 0;
}
