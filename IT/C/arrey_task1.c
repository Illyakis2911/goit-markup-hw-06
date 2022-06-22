#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  N 5

int main()
{

    int arr[N],i,sum=0;
    srand (time(0));

    for (i=0; i<N; i++)
    {
        arr[i]= rand()%5;
        printf ("Pандомні числа:%i\n", arr[i]);
        
    }
    for (i = 0; i < N; i++)
    {
        sum +=arr[i];

    }
    printf("Сума всіх чисел:%i\n", sum);

    for (i=0; i<N;i++)
    {
       sum=arr[i] * sum;
       printf("сума :%i\n", sum);
       
    }
   
    return 0;
}

