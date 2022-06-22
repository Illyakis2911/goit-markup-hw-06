#include <stdio.h>

int main()
{
    int n1,n2,n3,a;
    printf("Ведіть число n1:");
    scanf("%i", &n1);
    printf("Ведіть число n2:");
    scanf("%i", &n2);
    printf("Ведіть число n3:");
    scanf("%i", &n3);

   
    if (n2>n3)
    {
        a=n3;
        n3=n2;
        n2=a;
    }
    if (n1>n3)
    {
        a=n3;
        n3=n1;
        n1=a;
    }
    if (n1 > n2)
    {
        a = n2;
        n2 = n1;
        n1 = a;
    }

    printf ("res %i %i %i\n",n1,n2,n3);
}