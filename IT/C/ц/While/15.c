#include <stdio.h>

int main()
{
    int count = 0;
    float money=1000,p;
    printf ("Ведыть процент:");
    scanf ("%f", &p);

    do
    {

    } while (p < 0 || p > 25);˜
    p /=100;
    while (money <=1100)
    {
        money += money * p;
        count++; 
    }
    printf ("s=%g \n after %i manths\n", money, count);
    return 0;
}
