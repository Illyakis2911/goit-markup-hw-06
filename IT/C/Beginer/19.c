
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float x1,y1;
    printf("x1:");
    scanf("%f", &x1);

    printf("y1:");
    scanf("%f", y1);
    float x2, y2;

    printf("x2:");
    scanf("%f", &x2);

    printf("y2:");
    scanf("%f", &y2);

    
    
    printf("P:%f\n", 2*(abs(x1+x2))*(abs(y1+y2)));

    printf("S:%f\n", abs(x1-x2)* abs(y1-y2));

    return 0;
}