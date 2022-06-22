#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()
{ 
    int arr[N],i,j;

    for (i=0; i<N;i++)
    {
        printf ("Ведіть число:");
        scanf ("%i", & arr[i]);
      
    }    
    for (j=0; j< arr[N] ;j--)
    {
        arr[N]=arr[N]-arr[i];
    
    }
    printf("Результат: %i\n", arr[N]);
    return 0;
}