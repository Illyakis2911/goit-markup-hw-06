#include <stdio.h>

int main(void)
{
    int a1, a2, a3, res1, res2;
    printf("a1:");
    scanf("%i", &a1);
    printf("a2:");
    scanf("%i", &a2);
    printf("a3:");
    scanf("%i", &a3);

    res1 = res2 = 0;
    if (a1 > 0)
        res1++;
    if (a1 < 0)
        res2++;

    if (a2 > 0)
        res1++;
    if (a2 < 0)
        res2++;

    if (a3 > 0)
        res1++;
    if (a3 < 0)
        res2++;

    printf(" '+': %i\n '-': %i\n", res1, res2);
    return 0;
}