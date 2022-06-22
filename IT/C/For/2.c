#include <stdio.h>

main()

{
    int a, b;

    printf ("raz:");
    scanf ("%i", &a);

    printf ("dwa:");
    scanf ("%i", &b);

    int i;
    for (i = a; i <= b; i++)
        
    {
        printf("%i\n", i);
    }

    printf("N: %i", b - a + 1);
}