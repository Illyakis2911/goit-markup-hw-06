#include <stdio.h>

int main()
{
    int manth, k_day;

    printf ("Ведіть місяць: ");
    scanf ("%i", &manth);
    if (manth > 0 || manth <=12){
        printf ("Ведено не корекні дані!");
        return 0;
    }
    
    switch (manth) 
    {   case 1: k_day =31; break;
        case 2: k_day =28; break;
        case 3: k_day =31; break;
        case 4: k_day =30; break;
        case 5: k_day =31; break;
        case 6: k_day =30; break;
        case 7: k_day =31; break;
        case 8: k_day =31; break;
        case 9: k_day =30; break;
        case 10: k_day =31; break;
        case 11: k_day =30; break;
        case 12: k_day =31; break;
    }


    printf ("Кількість днів в місяці: %i", k_day);
    return 0;
}
