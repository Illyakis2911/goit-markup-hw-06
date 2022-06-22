#include <stdio.h>
#include <stdlib.h>

int main()
{
   char number[20];
    FILE *f_inp, *fint,*fflt;
    int i, s_int=0,cile,count=0;
    float s_flt=0,*drib ;


    f_inp=fopen(".txt","r");
    fint=fopen("output.txt","w");
    fflt=fopen("float.txt","w");
    drib=(float*)malloc(sizeof(float));

    while (1)
    {
       if(fscanf(f_inp,"%s",number)==EOF) break;
       while (number[i]!=0)
        {
           if(number[i]=='.')
           {
               fprintf(fflt,"%s\n",number);
                sscanf(number,"%f",&drib[count]);
                s_flt+=drib[count];
                count++;
                 drib=(float*)realloc(drib,(count+1)*sizeof(float));
               break;
           }
           i++;
        } 
        if  (number[i]==0)
        {
           fprintf(fint,"%s\n",number);
           sscanf(number,"%i",&cile);
           s_int+=cile;
        }
    }
    fprintf(fint,"Summa=%i",s_int);
    fclose(fint);
    fprintf(fflt,"Summa=%f",s_flt);
    fprintf(fflt,"Integer parts:");
    s_int=0;

    for (i=0; i < count; i++)
    {
        s_int+=(int)drib[i];
        fprintf(fflt,"%i",(int)drib[i]);
    }
    fprintf(fflt,"\nSumma=%f",s_flt);
   // close(fint);

    return 0;
}