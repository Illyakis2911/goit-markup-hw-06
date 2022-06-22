#include <stdio.h>

int main()
{
   int  x, col, anym, in60;
   // col:      x/y  x%y (min=0; max=y-1)
   // imput X
   if (x<1)
   {
       ....
       return;
   }
   if (x>=1984) in60=(x-1984)%60; // 0 ... 59 
   else in60=60-(1984-x)%60;

   col=in60/12 //0 ... 4
   anym = in 60 % 12; // 0 ... 11 
   switch (col)
   {
       case 0: printf ("green"); break;
       case 1: printf("green"); break;
       case 2: printf("green"); break;
       case 3: printf("green"); break;
       case 4: printf("green"); break;
   }
   switch (anym)
   {
       case 0: printf("green"); break;
       case 1: printf("green"); break;
       case 2: printf("green"); break;
       case 3: printf("green"); break;
       case 4: printf("green"); break;
       case 5: printf("green"); break;
       case 6: printf("green"); break;
       case 7: printf("green"); break;
       case 8: printf("green"); break;
       case 9: printf("green"); break;
       case 10:
           printf("green");
           break;
       case 11:
           printf("green");
           break;
   }
    return 0;
}
