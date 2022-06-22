#include <stdio.h>

int main()
{
    int A1,B1,C1;
    printf("ведіть число A1:");
    scanf("%i", &A1);
    printf("ведіть число B1:");
    scanf("%i", &B1);
    printf("ведіть число C1:");
    scanf("%i", &C1);

    if (A1>0) A1=1;
     else  A1=0;
    if (B1>0) B1=1;
     else B1=0;
    if (C1>0) C1=1;
     else C1=0;
     
    printf ("%i\n", A1+B1+C1);

    return 0;
}
