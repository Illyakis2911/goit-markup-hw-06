#include <stdio.h>
int main()
{
    int a, step,i,res,f;

    printf("Ведіть число:");
    scanf("%i", &a);
    printf("Ведіть степень:");
    scanf("%i", &step);

    for (i = 0; i < step-1; i++)
    {
         a *= a;
    }
    
    printf("Результат: %i\n", res);

    return 0;
}