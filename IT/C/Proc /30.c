#include <stdio.h>

int DigitN(int K,  int N);

int main()
{
    int K,N,cif;

    printf("Ведіть K\n");
    scanf ("%i", &K);

    printf("Ведіть N\n");
    scanf("%i", &N);

    
    cif= DigitN(K, N);
    if ( cif == -1)
    printf  (" No %i cifry in %i ", N,K);

    printf("In %i cif %i = %i", K,N, cif);

    return 0;
}

int DigitN(int K, int N) 
{
    int count=1;

    while  (K>0)
    {
        if (N == count)
            return K % 10;
            count++;
            K/=10;
    }
return -1;

}