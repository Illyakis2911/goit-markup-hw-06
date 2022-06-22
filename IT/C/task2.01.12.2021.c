#include <stdio.h>

 int main()
{ 
    int b1, b2, ost, chast, count=0;
    while (1){
    
    
        printf ("Ведіть число b1:");
        scanf ("%i", &b1);

    
     do{
        printf ("Ведіть число b2:");
        scanf ("%i", &b2);
            {
                printf("Ведені не корекні дані!\n");
            }
    } while ( b2==0);

    chast= b1/b2;
    ost= b1%b2;

    switch (ost)
    {
    case 1: for ( count; count<=b2; count++)
    {
        printf ("%i", chast);

    }
   break;
    case 2:
        while (count <= b2)
        {
            printf("%i", chast);
            count++;
    }
    break;
    case 3: do 
    {
        printf("%i", chast);
        count++;
    }while( count <=b2);
    break;

        default: continue;
    }
    printf ("- chastka, %i - ostasha", ost);
    }
    return 0;
}
