#include <stdio.h>


int main()
{
    int a, b;
    printf("Ведіть число А:");
    scanf("%i", &a);
    printf("Ведіть число В:");
    scanf("%i", &b);
    if (a > b)
    {
        printf("Ведені не корекні дані!");
    }
    int i, res=0;
    for (i = a; i <= b; ++i)
    {
        res += i * i;

        printf("Res = %i\n", res);
    }
        

    return 0;
}
