#include <stdio.h>

int main()
{
    // знайти K,N
    // N день тижння 
    // K вхідні дані 
    // K=1 -> N==2
    printf("Input K und N:")
    scanf("%i%i", &K,&N);
    if((K>=1 && K<=365) && (N>=1 && N<=7))
    {
      res = (K + N - 2) % 7 + 1;
    }
    else
    {
        printf (" Error in input data!")
    }
  

    return 0;
}
