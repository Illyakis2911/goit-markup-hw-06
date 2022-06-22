
#include <stdio.h>

main()
{
    int k, n;
    printf ("K: ");
    scanf ("%i", &k);

    printf ("N: ");
    scanf ("%i", &n);

    int i;
    for (i = 0; i < n; ++i)
    {
        printf("%i\n", k);
    }

    return 0;
}