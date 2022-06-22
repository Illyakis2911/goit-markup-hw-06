#include <stdio.h>

int main()
{
    int A,B;
    printf("ведіть число A:");
    scanf("%i", &A);
    printf("ведіть число B:");
    scanf("%i", &B);

    printf("%d\n", (A>2) & (B<=3));

    return 0;
}
