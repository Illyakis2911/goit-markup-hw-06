#include <stdio.h>
int main()
{
    float res = 1, dod = 1, n, i;
    printf ("N=");
    scanf ("%f", &n);

    if (n < 0)
    {
        printf ("Error!");
    }
    
    for (i=2; i<=n; i++)
   {
    dod=dod*i;
    res+=dod;
    printf ("+%.0f", i);
   }
    printf ("res = %.0f\n", res);
   
    return 0;
}
