#include <stdio.h>

int main()
{
    int num;
    do
    {
        printf("Ведыть число:");
        scanf("%i", &num);

    } while (num<=0);
    
    while (num >0)
    {
        if ((num%10)%2!=0)
        {
            printf ("TRUE");
           break;
        }
     num/=10;
    }
     if (num==0) 
     {
         printf("FALSE");
     }
    return 0;
}
