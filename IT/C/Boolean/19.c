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

       printf("%d\n", (A==(-1)*B) || (A==(-1)*C) || (C==(-1)* B));

    return 0;
}
