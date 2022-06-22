#include <stdio.h>

int main()
{
    int A, B;
    printf("ведіть число A:");
    scanf("%i", &A);
    printf("ведіть число B:");
    scanf("%i", &B);

    printf("%d\n", (A >=0) & (B <-2));

    return 0;
}
