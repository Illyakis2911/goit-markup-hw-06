#include <stdio.h>

int main()
{
    int gus=0, kro=0, i, nog;
    printf ("Кількість ніжок:");
    scanf ("%i", &nog);

    for (i=nog; i>0; i-=2)
    {
        gus++;
    }
    for (i = nog; i > 0; i -= 4)
    {
       kro++;
    }
    kro = 0;
    for (i = nog; i>=0; i--)
    {
        if (gus == 0)
        {
            printf("закінчились ноги");
            return 0;
        }
        gus=gus - 2;
        kro= kro + 1;
        printf("Кількість кроликів: %i\n", kro);
        printf("Кількість гусок: %i\n", gus);
    }

    return 0;
}
