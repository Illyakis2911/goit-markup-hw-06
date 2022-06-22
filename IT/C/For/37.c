#include <stdio.h>

int main()
{
        float res = 1, dod = 1, n, i, max;

        printf("N=");
        scanf("%f", &n);

        if (n < 0)
        {
            printf("Error!");
        }
        printf ( "res=1^1\n");
        for (max = 2; max <= n; max++)
        {
            dod=1;
            for (i=1; i<=max; i++)
            {
                dod=dod*max;
            }
            res += dod;
            printf("+%.0f^%.0f\n", max, max);
        }
        printf("%g\n", res);

        return 0;
}
