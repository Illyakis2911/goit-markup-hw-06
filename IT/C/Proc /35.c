#include <stdio.h>


 float Fact2 ( int N);
int main()
{ 
    int N;
    float res;
    printf ("Ведіть N");
    scanf ("%i", &N);

    res=Fact2(N);

    printf ("%i!!=%.0f", N,res);
    return 0;
}
    float Fact2( int N)
{
       // int mnoz;

        float  res=N;
        
        /*if (N%2==0)
        {
        res= mnoz=2;
        else res = mnoz=1;
        }*/


        while (N>0)
        {
            
            res*=N;
            N-=2;
        }
        return res;

}
