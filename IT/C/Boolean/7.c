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
    printf("%d\n", ((A<B) & (B<C)) || ((A>B) & (B>C)));

    return 0;
}
