# include <stdio.h>

int main()
{
   // Memory
int day, manth, d_year=0;

   // intput
   /*
   printf("Ведыть дату (день.місяць):");
   scanf("%i.%i", &day, &manth); 
   */
   printf ("day" );
   scanf ("%i", &day);
   if (day < 1 || day > 31)
   {
       printf ( "Wong day!");
       return 0;
   }
   printf("manth");
   scanf("%i", &manth);
   if (manth < 1 || manth > 31)
   {
       printf("Wong manth!");
       return 0;
   }

   // logic
   switch(manth)
   {
       case 2: if(day>28) { printf ("Wrong date!"); return 0;}
             break;
       case 4:
       case 6:
       case 9:
       case 11: if (day > 30) { printf("Wrong date!"); return 0;}
    } 
/*
    switch(manth)
    { case 1: d_year = day; 
          break;
      case 2:
          d_year = 31 + day;
          break;
      case 3:
          d_year = 59 + day;
          break;
      case 4:
          d_year = 90 + day;
          break;
      case 5:
          d_year = 120 + day;
          break;
      case 6:
          d_year = 151 + day;
          break;
      case 7:
          d_year = 181 + day;
          break;
      case 8:
          d_year = 212 + day;
          break;
      case 9:
          d_year = 243 + day;
          break;
      case 10:
          d_year = 273 + day;
          break;
      case 11:
          d_year = 303 + day;
          break;
      case 12:
          d_year = 334 + day;
          break;
    }
*/
   d_year += day; //  d_year= d_year += day;
   switch (manth) 
   {
       case 12: d_year += 30;
       case 11: d_year += 31;
       case 10: d_year += 31;
       case 9: d_year += 31;
       case 8: d_year += 30;
       case 7: d_year += 30;
       case 6: d_year += 31;
       case 5: d_year += 30;
       case 4: d_year += 31;
       case 3: d_year += 28;
       case 2: d_year += 31;

   }


   // output
   printf ("res %i", d_year);

    return 0;
}
