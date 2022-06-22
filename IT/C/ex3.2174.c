#include <stdio.h>

int main()
{
    float a, c, res;

   printf ("Ведіть дробове число a:");
   scanf ("%f", & a);
   if (a <= 0)
   {
       printf("Дробове число повино бути натуральним: ");
       return 0;
   }

   printf("Ведіть дробове число b:");
   scanf("%f", &c);
   if (c <= 0)
   {
       printf("Дробове число повино бути натуральним: ");
       return 0;
   }

    res=a-c;

    printf ("Результат: %0.2f\n", res);


   return 0;
}
