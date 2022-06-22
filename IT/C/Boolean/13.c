#include <stdio.h>

int main()
{
    int A, B, C;
    printf("ведіть число A:");
    scanf("%i", &A);
    printf("ведіть число B:");
    scanf("%i", &B);
    printf("ведіть число C:");
    scanf("%i", &C);

    printf("%d\n", ((A >0) || (B > 0) || (C > 0)));

    return 0;
}
