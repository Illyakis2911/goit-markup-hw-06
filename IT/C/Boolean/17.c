#include <stdio.h>

int main()
{
    int A, B, C;
    printf("ведіть число A:");
    scanf("%i", &A);

    printf("%d\n", (A > 99) & (A < 1000) & (A%2 != 0));

    return 0;
}
