#include <stdio.h>

int main()
{
    int A;
    printf("ведіть число A:");
    scanf("%i", &A);
    if (A<0)
    { 
        A=A-2; 
    }
    else if (A==0)
    { 
        A=10;

    }
    else if (A>0)
    {
        A++;
    }
    printf ("%i\n", A);

    return 0;
}
