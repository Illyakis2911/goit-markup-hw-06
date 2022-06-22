#include <stdio.h>

main()

{
    int n, k;
    printf("k:");
    scanf("%i", &k);
    printf("n:");
    scanf("%i", &n);
    if (n == 0)
    {
        printf ("Ведено не корекні дані! N не може бути менше або дорівнувати нулю! ");
    }
    

    int i;
    for (i = 0; i < n; ++i)
    {
        printf("%i\n", k);
    }

    return 0;
}