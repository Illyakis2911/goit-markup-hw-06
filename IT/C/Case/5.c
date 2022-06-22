#include <stdio.h>

int main()
{
  int  n;
  float a, b, res;
  printf("Ведіть число А:");
  scanf ("%i", &a);
  printf ("Ведіть число Б:");
  scanf ("%i", &b);
  if (b == 0)
  {
    printf(" Ведетні  не корекны дані! ");
    return 0;
  }

  printf("Дії які можна виконати  виконати:\n 1-дадати\n 2-відняти\n 3-помножити\n 4-поділити\n ");
  scanf("%i", &n);

  if (n <=0 || n >=5)
  {
    printf(" Ведетні  не корекны дані! ");
    return 0;
  }
  
  switch (n)
  {
      case 1: res= a + b;  break;
      case 2: res= a - b;  break;
      case 3: res= a * b;  break;
      case 4: res= a / b;  break;
  }
   printf ("Результат: %i\n", res);
      
  return 0;
}
