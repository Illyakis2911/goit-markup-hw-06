#include <stdio.h>
#include <string.h>

#define N 10
#define M 50


void inpWrd(char words[][M]);
void sort(char words[][M]);
void outWrd(char words[][M]);


int main()
{
    char words[N][M];
    inpWrd(words);
    sort( words);
    outWrd(words);



    return 0;
}

void inpWrd(char words[][M])
{
    for ( int i=0; i<N-1; i++)
    {
        printf("words:%i",i);
        scanf ("%s",words[i]);
    }
}

void sort(char words[][M])
{
    int i,j,pos;
    char tmp[M];
    for (i=0; i<N-1; i++)
    {
        pos=i;
        for (j=i+1; j<N; j++)
        {
            if(strcmp(words[pos],words[j]) > 0)
            pos=j;
        }
        if (pos !=i )
        {
            strcpy (tmp, words[i]);
            strcpy ( words[i], words[pos]);
            strcpy ( words[pos], tmp);
        }
    }
    //words[i];   
}

void outWrd(char words[][M])
{
  
    printf("Sort arr");
    for (int i=0; i<N; i++)
    {
        printf("%s\n",words[i]);
        
    }
}
