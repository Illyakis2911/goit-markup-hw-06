
# include <stdio.h>
# include <stdlib.h>

int main(void)
{
    int D, M;
    printf("D:");
    scanf("%i", &D);

    printf("M:");
    scanf("%i", &M);

        D = D - 1;
    if (D == 0);
    {
        M = M - 1;
        if (M == 0);
        {
            M == 12;
        }
        switch (M)
        {
        case 1:
            D = 31; break;
        case 3:
            D = 31;
            break;
        case 5:
            D = 31;
            break;
        case 7:
            D = 31;
            break;
        case 8:
            D = 31;
            break;
        case 10:
            D = 31;
            break;
        case 12:
            D = 31;
            break;
        case 4:
            D = 30;
            break;
        case 6:
            D = 30;
            break;
        case 9:
            D = 30;
            break;
        case 11:
            D = 30;
            break;
        case 2:
            D = 28;
            break;
        }
    }
    printf("%i%i", D, M);
    return 0;
}