/*task 1. Оголосити покажчик на масив типу double. З клавіатури - ввести розмірність масиву. 
Подальші дії - реалізувати в циклі і за допомогою наступних чотирьох функцій: 
а) динамічне виділення пам'яті під масив; 
б) заповнення масиву даними (з клавіатури чи випадково); 
в) виведення даних масиву на екран; 
г) звільнення виділеної під масив пам'яті.
В кінці циклу користувач повинен щось ввести з клавіатури або щось натиснути, щоб: 
1) повторити все спочатку; 
2) завершити роботу програми.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
unsigned long long _msize(void *arr);
double  *getMem (& N);
void    inputArr(double *arr,  int N);
void    outputArr( double *arr, int  N);
       

int main()
{
    double *arr;
    int N;
    srand(time(0));

    do
    {
        arr = getMem(& N);
        inputArr (arr,N);
        outputArr (arr,N);
        free (arr);
        arr=NULL;
        if (_msize(arr) <=0) 
        {
            printf("Memory free\n");
        }
        arr=NULL;
        printf ("Next ? ESC - no, any key - yes\n\n");
       
    } while(getch()!=27);

    return 0;
}

double *getMem(int *N)
{
    printf ("N=");
    scanf ("%i", N);
    return (double*) malloc((*N) * sizeof(double));
}
void inputArr(double *arr, int N)
{
    int i;

    
    for (i=0; i<N; i++)
    {
        arr[i]=(rand()%10000)*0.01;
    
    }
    
}
void outputArr(*arr, *N)
{
    int i;

    printf("Current array:\n") ;
    for (i = 0; i<N; i++)
    {
        arr[i] = (rand() % 10000) * 0.01;
        printf("%4.2lf ", arr[i]);
    }
    printf("\n");
}
