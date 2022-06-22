
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1,y1,x2,y2;
    int len,hig,P,S;

    len= abs(x1-x2);
    hig= abs(y1-y2);
    P=2*(len+hig);
    S=len * hig;

    printf ("s=%i p=%i" ,S,P);
     
}

