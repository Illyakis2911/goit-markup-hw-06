/*task4.
Напишіть програму, яка містить:
1) процедуру putEl(), яка приймає на вхід індекс елемента масиву, його значення і вставляє в потрібну комірку масиву;
2) функцію getEl(), яка приймає на вхід індекс елемента масиву і повертає значення, що відповідає даному індексу.
Примітка: обидві функції повинні перевіряти, чи не виходить вказаний індекс за межі розмірності масиву!!!
В цілому програма повинна виконувати таку послідовність дій (в циклі!):
- початкове обнулення всього масиву;
- введення з клавіатури індексу елемента і самого елемента, який потрібно вставити в масив;
- вставку елемента в масив;
- виведення масиву на екран для перевірки;
- введення з клавіатури індексу елемента, який потрібно знайти в масиві;
- виведення на екран елемента, знайденого за введеним індексом;
- запит користувачу на повторення перелічених дій, або припинення роботи.
Примітка: кожну перелічену дію реалізувати як окрему процедуру (функцію)!
Модифікуйте програму на випадок двовимірного масиву.
*/
#include <stdio.h>
#include <stdlib.h>

// #define  N 15

void inpIndEL(int *ind, int *num, int N);
void putEl(int *arr,  int ind, int num);
void outArr(int *arr);
char rep();
int* getMam(int *N);

    int main()
{
    int N, *arr;
    int ind,num;
    char symb;

    arr = getMem(&N);

    printf("N=%i array of %i bytes\n", N, msize(arr));
do
    {
        inpIndEL(&ind, &num, N);
        putEl(arr, ind, num);
        outArr(arr);

        printf("ind. for output;");
        scanf("%i", &ind);

        printf("arr[%i] =%i", ind, arr[ind]);

        symb = rep();
}
  while ( symb!=27);

    return 0;
}
void inpIndEL(int *ind, int *num, int N)
{
    
    do{
    printf ("Index:");
    scanf ("%i", ind);
    } while (*ind < 0 || *ind > N- 1);
    printf("Namber:  ");
    scanf("%i", num);
}
void putEl(int *arr, int ind, int num)
{
    arr[ind]=num;
}
void outArr(int *arr)
{
    int i,N;

    N = msize(arr) / sizeof(int);
    for (i=0; i<N; i++)
    {
        printf ("%i", arr[i]);
    }
    printf ("\n");
}
char rep()
{
   char ch;
    
    getchar ();
    scanf ("%c",&ch);
    return ch;
}
int *getMam (int *N)
{
    printf ("N=");
    scanf ("%i",N);
   return (int*) calloc ( *N, sizeof(int));
}