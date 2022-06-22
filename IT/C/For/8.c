#include <stdio.h>

int main()
{
    int a, b, i, res=1;
    printf("Ведіть число А:");
    scanf("%i", &a);
    printf("Ведіть число В:");
    scanf("%i", &b);
    if (a > b)
    {
        printf("Ведені не корекні дані!\n");
        return 0;
    }

    for (i = a; i <= b; i++)
    {
        res = res * i;

        printf("%i\n", i);
    }
    printf("Res= %i\n", res);

    return 0;
}
