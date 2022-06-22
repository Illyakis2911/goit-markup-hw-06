#include <stdio.h>

int dobcif (int N);

int main()
{
    int N,res;

    printf("Ведіть N");
    scanf ("%i", &N);

    res=dobcif (N);

    printf ("res: %i", res);
    return 0;
}
int dobcif (int N)
{
    int dob=1;
    do
    {
        dob*=N%10;
        N/=10;
    }
    while (N>0);
  
    return dob;
}