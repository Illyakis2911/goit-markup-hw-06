#include <stdio.h>

int main()
{
    char word[50];
    FILE *fp1, *fp2;
    int i;

    fp1=fopen("input.txt","r");
    fp2=fopen("output.txt","w");

    while (1)
    {
        i=0;
        if(fscanf(fp1,"%s",word)==EOF) break;
        while (word[i]!=0)
        {
           if(word[i]>'0' && word[i]<='9')
           {
               fprintf(fp2,"%s\n",word);
               break;
           }
        } 
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}