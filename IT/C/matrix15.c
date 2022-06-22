#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7

int main()
{
    float matr[N][N];
    int i,j,count=0,r_min,r_max,c_min,c_max;
     srand (time(0));

    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            matr[i][j]=0.1*(rand()%101);
            printf ("%4.1f",matr[i][j]);
        }
        printf (" \n");
    }
    printf(" \n");

    r_min=c_min=0;
    r_max=c_max=N-1;
    while (1)
    {
        for (i=c_min;i<=c_max;i++)
        {
            printf ("%.2g", matr[r_min][i]);
            count++;
        }
        if (count == N * N)
            break;
        r_min++;

       

        for (i=r_min;i<=r_max;i++)
        {
            printf("%.2g", matr[i][c_max]);
            count++;
        }
        c_max--;

        for (i=c_max;i>=c_min;i--)
        {
            printf("%.2g", matr[r_max][i]);
            count++;
        }
        r_max--;
        
        for (i=r_max;i>=r_min;i--)
        {
            printf("%.2g", matr[i][c_min]);
            count++;
        }
        c_min++;
    }
    return 0;
}
