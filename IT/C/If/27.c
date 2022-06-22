#include <stdio.h>

int main()
{
    float x;
    int f, cile;
    // Вивисти  х
    if (x<0) f=0;
    else {
      cile=x;
      if (cile%2==0) f=1;
      // варіант 2 if (((int)x)%2==0) f=1;
      else f=-1;
    }
    printf ("f(%g)=%i",x,f);



}

 #include<stdio.h>

    int main()
{
    int year;
    // знайти рік
    printf("ведіть число  року :");
    scanf("%i", &year);

    if (year >= 1)
    {

        if (year % 4 != 0)
        {
            if (year % 100 == 0 || year % 400 != 0))
               printf ("%i - не високосний рік", year);
            return;
        }
    }
}
else printf("%i - високосний рік");

else printf(" No soch year");
}

return 0;
}