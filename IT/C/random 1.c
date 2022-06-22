#include <stdio.h>

int main ()
{
    int a,b;
    
    printf ("Ведыть A:");
    scanf ("%i", &a);
    printf("Ведыть B:");
    scanf("%i", &b);

    srand (time(0));
    printf ("%i\n", a + rand() % a - b + 1);
    
    return 0;
}