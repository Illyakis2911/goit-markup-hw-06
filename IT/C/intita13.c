#include <stdio.h>

int main()
{
    int N, count=0;
    printf ("Ведіть значиння:N");
    scanf ("%i", &N);
    while (N < 5)
    {
        N/=10;
        count++;
        if (count > 5)
        {
            printf("Large");
        }
        else
        {
            printf ("Small");
        }
    }
}