#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main()
{
    int arr[N],i,j,k,max=N;
    srand(time(0));

    for (i=0; i<N; i++)
    {
        arr[i]=rand()%10;
        printf("Рандомні числа: %i\n", arr[i]);
    }
    printf ("\n");
    for (i=max-1; i>0; i--)
    {
        for (j=i-1; j>=0; j--)
        {
            if (arr[i] == arr[j])
            {
                for (k=j; k < max-1; k++)
                {
                    arr[k]=arr[k+1];
                }
                i--;
                max--;
            }
        }
    }


    for (i = 0; i < max; i++)
    {
    
        printf("Рандомні числа: %i\n", arr[i]);
    }
    return 0;
}
