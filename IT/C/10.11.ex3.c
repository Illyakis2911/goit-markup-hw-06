
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int A,B,C,tmp;
    

    printf ("A=%i B=%i C=%i",A,B,C);

    tmp=A;
    A=C;
    C=B;
    B=tmp;
 
    printf ("A=%i B=%i C=%i",A,B,C);
     
}