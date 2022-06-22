#include <stdio.h>

int main()
{
    int a,b,c;
    // знайти a,b,c;
    printf("ведіть число a:");
    scanf("%i", &a);

    printf("ведіть число b:");
    scanf("%i", &b);

    printf("ведіть число c:");
    scanf("%i", &c);

    if((a<b && b<c) || (a>b && b>c)){
        a*=2;
        b*=2;
        c*=2;
    }
    else {
        a=-a;
        b=-b;
        c=-c;
    }
    printf ("a=%i b=%i c=%i", a,b,c);
    

    return 0;
}
