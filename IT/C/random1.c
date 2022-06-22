#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int  const illya=10;
    int  arr[illya];


    for (int i=0; i < illya; i++)
    {
         arr[i]=rand()%20;
    }

    for (int i = 0; i < illya; i++)
    {
        printf("Рандомне число: %i\n", arr[i]);
    }

        

    return 0;
}