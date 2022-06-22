/*Cкладіть програму, яка б включала функцію для переведення часу (години, хвилини, секунди) в кількість секунд:
1) години, хвилини, секунди - різні змінні, що вводяться в main() з клавіатури;
2) вказані змінні передаються у фунцкцію як аргументи;
3) функція повертає еквівалентну кількість секунд (тип long).*/
#include <stdio.h>

int  mac (int sec, int min, int god);

int main ()
{
    int sec,min,god;
    printf ("Ведіть годину:");
    scanf ("%i", &god);
    printf("Ведіть хвилину:");
    scanf("%i", &min);
    printf("Ведіть секунду:");
    scanf("%i", &sec);

    long res=mac(sec,min,god);
    
    printf ("%d/n", res);

    return 0;
}
 int  mac(int sec, int min, int god)
{
    int sec1, sec2, res;
    sec1 = min*60;
    sec2 = god*3600;
    res= sec1+sec2+sec;

    return res;

    
}