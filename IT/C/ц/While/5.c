# include <stdio.h>

int main()
{
   int num, step=0;
   printf ("Ведіть:");
   scanf ("%i", &num);
   // input num 
   // 8= 2*2*2  8/2=4(ost=0) 2=2(ost=0) 2/2=1(ost=0) -step 2
   // num =12 /2=6(ost=0) /2=3(ost=0) /2=1(ost=1) = no step 2
   // num = 14/2=7(ost=0) /2=3(ost=1) = no step 2
   printf ("%i",num);
   while(num>1)
   {
       if (num%2 !=0) 
       {
        printf ("\n  помилка, не степень 2");
        return 0;
       }
    num/=2;
    step++;
   }
   printf ("= 2^%i", step);
    return 0;
}

