#include <stdio.h>
#include <stdlib.h>



char *scant();

int main()
{
    char *text;

    printf("text:");
    text=scant();
    printf("text:%s",text);
    return 0;
}
char *scant(){
    char *str;
    int caunt=0;

    str=(char*)calloc(1,sizeof(char));
    while (1)
    {
       scanf("%c",str+caunt);
        if(str[caunt]=='\n'){
            str[caunt]=0;
            break;
        }
       // printf("%c",str[caunt]);
        caunt++;
        str=(char*)calloc(str,(caunt+1)*sizeof(char));
    }
    return str;
}