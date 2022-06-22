#include <stdio.h>

int main()
{ int a,b;
    printf ("Ведіть число А:");
    scanf ("%i", &a);
    printf("Ведіть число В:");
    scanf("%i", &b);
    if (a > b)
    {
        printf ("Ведені не корекні дані!");
    }
    int i;
    for (i = b - 1; i > a; --i)
        printf("%i\n", i);
    printf("N: %i\n", b - a - 1);

    return 0;
}
