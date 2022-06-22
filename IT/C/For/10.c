/*
#include <stdio.h>

int main()
{
    int n, i;
    printf ("Ведіть число N:");
    scanf ("%i", &n);
    if (n<=0)
    {
        printf ("Error!");
        return 0;
    }
    float res=0;
    for ( i = 1; i <=n; i++)
    {
        res += 1 / (float) i;
    }
    printf ("Res= %f\n", res);
    
    
    return 0;
}
*/
// for11
/*Дано целое число N(> 0).Найти сумму

    N2 +
    (N + 1)2 + (N + 2)2 +...+ (2·N)2

    (целое число) .
    # include <stdio.h>
    # include <math.h>

    int main()
    {
        int n, i, res=0;
        printf("Ведіть число N:");
        scanf("%i", &n);
        if (n <= 0)
        {
            printf("Error!");
            return 0;
        }

        for (i = 0; i <= n; i++)
        {
            res += pow (n+i,2);
        }
        printf("Res= %i\n", res);

        return 0;
    }
    */
// For 12
/*Дано целое число N(> 0).Найти произведение
    1.1· 1.2 · 1.3 ·...
    (N сомножителей).
    */
   /*# include <stdio.h>
    int main()
{
    int n,i;
     
        printf("Ведіть число N:");
    scanf("%i", &n);
    if (n <= 0)
    {
        printf("Error!");
        return 0;
    }
    float res=1;
    for (i =0; i <= n; i++)
    {
       res *= 1.0 + (float)i / 10;
        printf("Res= %0.2f\n", res);
    }
    

    return 0;
}
*/
// for 13
/*For13◦
        .Дано целое число N(> 0)
        .Найти значение выражения

    1.1 − 1.2 +
    1.3 − ...

    (N слагаемых, знаки чередуются)
        .Условный оператор не использовать.
        */

 /*#include <stdio.h>
int main()
{
    int n, i;

    printf("Ведіть число N:");
    scanf("%i", &n);
    if (n <= 0)
    {
        printf("Error!");
        return 0;
    }
    float res = 1;
    for (i = 0; i <= n; i++)
    {
        res *= 1.0 + (float)i / 10;
        printf("Res= %0.2f\n", res);
    }

    return 0;
}
*/
// for 15
/*
Дано вещественное число A и целое число N (> 0). Найти A в степе-
ни N:

A
N = A·A· . . . ·A
*/
#include <stdio.h>
int main()
{
    int a ,n,i;
    printf("Ведіть число A:");
    scanf("%i", &a);
    printf("Ведіть число N:");
    scanf("%i", &n);
    if (n <= 0)
    {
        printf("Error!");
        return 0;
    }
    int res=1;
    for (i = 1; i <= n; i++)
    {
        res += (a*res);
        printf("Res= %i\n", res);
    }

    return 0;
}