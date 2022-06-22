
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float x1, y1;
    printf("x1:");
    scanf("%f", &x1);

    printf("y1:");
    scanf("%f", &y1);

    float x2, y2;
    printf("x2:");
    scanf("%f", &x2);

    printf("y2:");
    scanf("%f", &y2);

    float x3,y3;
    printf("x3:");
    scanf("%f", &x3);
    printf("y3:");
    scanf("%f", &y3);

    float a,b,c;
    a= sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    b= sqrt(pow(x2-x3,2) + pow(y2-y3,2));
    c= sqrt(pow(x3-x1,2) + pow(y3-y1,2));

    float S,p;
    p= (a+b+c)/2;
    S= sqrt(p*(p-a)*(p-b)*(p-c));
    printf ("S:%f\n",S);
    

    return 0;
}