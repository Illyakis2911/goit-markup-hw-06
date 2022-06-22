#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{
    
    
    int a[N],b[N],c[2*N];
    int i=0,j=0,k=0;
    srand (time(0));

    printf ("Ведіть: a[N]");
    scanf ("%i", &a)

    
for (k=0; k<2*N; k++)
{
    if (j == N || i < N && a[i] < b[j])
    {
        c[k]=a[i];
        i++;
    }
    else 
    {
        c[k]=b[j];
        j++;
    }
}
    return 0;
}
