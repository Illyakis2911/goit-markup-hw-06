/* task3.Напишіть функцію, альтернативну стандартній функції піднесення до степеня pow()(наприклад, 
power()), яка повертає результат типу double.*/
#include <stdio.h>
#include <math.h>

double power(int a, int step);

int main()
{
    int a,step;
    
    printf("Ведіть число:");
    scanf ("%i", &a);
    printf("Ведіть степень:");
    scanf("%i", &step);

    double res = power(a, step);
    printf("Результат: %.2lf\n", res);

    return 0;
}
double  power( a, step)
{
    int i;
    double sum=1;
    for (i = 1; i <=step; i++)
    {
       sum*=a;
    }

    return sum;
}