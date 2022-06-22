#include <stdio.h>

main()
{
    int num=796, od, des;


    // input num

    od = num % 10;
    num / 10;
    des = num % 10;
    num /= 10;


    printf ("revers=%i", od*100+des*10+num);
}
