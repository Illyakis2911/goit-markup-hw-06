
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float x1,y1;
    printf("x1:");
    scanf("%f", &x1);

    printf("y1:");
    scanf("%f", &y1);

    float x2, y2;
    printf("x2:");
    scanf("%f", &x2);

    printf("y2:");
    scanf("%f", &y2);

    printf("%f\n", sqrt(pow(x1-x2,2)+pow(y1-y2,2)));

    return 0;
}