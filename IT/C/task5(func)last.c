#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

//#define N 15

void inpIndEl(int *row,int *col,int *num,int N,int M);
void putEl(int **arr,int row,int col,int num);
void outArr(int **arr,int N,int M);
char rep();
int **getMem(int **matr=NULL, int *N, int *M);

int main()
{
// - початкове обнулення всього масиву;
	int N,M, **matr=NULL;
	int row,col,num;
	char symb;
	
// виділення динамічного масиву
   matr=getMem(matr,&N,&M);

   printf ("New matrix:\n");
   for(row=0; row<N; row++)
   {
	   for (  col = 0; col < M; col++)
	   {
		   matr[rom][col]=rand()10%;
		   printf("%i",matr[row][col]);
	   }
	  printf("\n");
	   
   }
    matr=NULL;
   
//   printf("arr=%p\n",arr);
//   printf("N=%i array of %i bytes\n",N,_msize(arr));
/*
do{
// - введення з клавіатури індексу елемента і самого елемента, який потрібно вставити в масив;
	inpIndEl(&row,&col,&num,N,M);
// - вставку елемента в масив;
	putEl(matr,row,col,num);
// - виведення масиву на екран для перевірки;
    outArr(matr,N,M);
// - введення з клавіатури індексу елемента, який потрібно знайти в масиві;
    printf("Ind. for output: ");
	scanf("%i%i",&row,&col);
// - виведення на екран елемента, знайденого за введеним індексом;
	printf("arr[%i][%i]=%i\n",row,col,matr[row][col]);
// - запит користувачу на повторення перелічених дій, або припинення роботи.
	symb=rep();
}while(symb!=27);
/*
	arr=(int*)realloc(arr, (N+10)*sizeof(int));	
	printf("arr=%p\n",arr);
   	printf("N=%i array of %i bytes\n",N+10,_msize(arr));
//   	free(arr+1);
// 	printf("N=%i array of %i bytes\n",N+10,_msize(arr));
   	free(arr);
   	printf("arr=%p\n",arr);
   	//arr=NULL;
   	printf("free complete");
	printf("N=%i array of %i bytes\n",N+10,_msize(arr));
   	printf("NUll = %i ",_msize(NULL));
*/

	for(i=0;i<N;i++){
		free(matr[i]);
	}
	free(matr);
	
	return 0;
}

void inpIndEl(int *row,int *col,int *num,int N,int M)
{
	
  do{
	printf("row: ");
	scanf("%i",row);
  }while (*row<0 || *row>N-1);
  
  do{
	printf("col: ");
	scanf("%i",col);
  }while (*col<0 || *col>M-1);
  
  printf("Number: ");
  scanf("%i",num);

}

void putEl(int **arr,int row, int col,int num)
{
	arr[row][col]=num;
}

void outArr(int **arr,int N,int M)
{
	int i,j;
	
//	N=_msize(arr)/sizeof(int);
	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			printf("%i ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

}

char rep()
{
	char ch;
	
	printf("\nContinue? ESC - no, any key - yes");
	ch=getch();
    // getchar(); scanf("%c",&ch);
    printf("\n");
	return ch;
}

int** getMem(int *N, int *M)
{
	int **res,i;
		
	printf("N=");
	scanf("%i",N);
	printf("M=");
	scanf("%i",M);

	if(matr==NULL)
	{
	res=(int**)calloc(*N, sizeof(int*));
	for (i = 0; i <*N; i++)
	{
        res[i]=(int*)calloc((*M)) ,sizeof(int)) ;
    }
	return res;
	}

//	res[0]=(int*)calloc((*N)*(*M), sizeof(int));
	
	for(i=0;i<*N;i++){
		res[i]=(int*)calloc((*M), sizeof(int));
//		res[i]=res[i-1]+*M;
	}
	
	return res;
