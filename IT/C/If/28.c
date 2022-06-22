#include <stdio.h>

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
     
         else printf (" No soch year");
        }


   return 0;
}