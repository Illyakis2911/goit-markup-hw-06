#include <stdio.h>
#include <stdbool.h>

bool ilLeapYear (int Y);

int main ()
{ 
    int Y;
    bool res;

    printf ("Ведіть Рік:");
    scanf ("%i",&Y);

    res = ilLeapYear(Y);

    printf ("%i\n", res);
    if (res==true)
    printf ("True");
    else peintf ("false");

    return 0;
}
bool ilLeapYear(int Y)
{
    if(Y%4!=0 || (Y%100 == 0 && Y%400 != 0)) 
    return false;
    return true;
}