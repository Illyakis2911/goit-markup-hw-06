#include <stdio.h>

int dobcif(int N);

int main()
{
    int N, res;

    printf("Ведіть N");
    scanf("%i", &N);

    res = dobcif(N);

    printf("res: %i", res);
    return 0;
}

int A;
int B, Max;
printf ("Ведіть A:");
scanf ("%i", &A);
printf ("Ведіть B:");
scanf ("%i", &B);
if (A > B) 
{
  Max=A;
  printf ("%i Результат :\n", Max);
}
Max = B;
printf ("%i Результат :\n", Max);
return Max; 


  
