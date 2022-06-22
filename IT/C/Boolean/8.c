#include <stdio.h>

int main()
{
    int A, B, C;
    printf("ведіть число A:");
    scanf("%i", &A);
    printf("ведіть число B:");
    scanf("%i", &B);

    printf("%d\n", (A%2 !=0) & (B%2 !=0));

    return 0;
}
