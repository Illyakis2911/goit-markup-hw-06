#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main()
{ int arr[2 * N],i,j,count=N;
    srand(time(0));

    for (i = 0; i < N; i++)
    {
        arr[i] = -9 + rand() %9;
        printf("Рандомні числа: %i\n", arr[i]);
    }

    // заповнення arr через рандомайзер
     for (i=0; i<count; i++)
     {
         if (arr[i]%2==0)
         {
            /* arr [count]==arr[i];
             count;
             */
            for (j=count;j>=i;j--)
            {
                arr[j+1]=arr[j];
            }
            i++;
            count++;
         }
     }
     for (i = 0; i < count; i++)
     {
         printf ("Дубльовані числа: %i\n",arr[i]);
     }

         return 0;
}
