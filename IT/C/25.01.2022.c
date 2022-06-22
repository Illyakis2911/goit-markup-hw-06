#include <stdio.h>

void ta90(int el, float val, float &a, float &b, float &h, float &S);

int main()
{
    int el;
    float val, a, b, h, S;

    printf("el:\n");
    scanf("%i", &el);

    printf ("val:\n");
    scanf ("%i", &val);

    ta90(el,val,a,b,h,S);



    return 0;
}

void ta90(int el, float val, float &a, float &b, float &h, float &S)
{
    if (el <1 || el >4 || val<=0)  a=b=h=S=1;
    {
        switch (el)
        {
        case 1
                a=val;
                b=...;
                h=...;
                S...;
            break;
        case 2
                b=val;
                a=...;
                h=...;
                S=...;
            break;
        case 3
            break;
        case 4
            break;
        }
       
    }
    

}
