#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int a[15],b[15],i,j;



     for (i=0; i<15; i+=3)
     {
         b[j]=a[i];
         j++;
     }
    printf("%i\n",j);
    for (i=0; i<j;i++)
    {
        printf ("%i",b[i]);
    }

    return 0;
}
