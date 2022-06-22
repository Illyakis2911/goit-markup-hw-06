#include  <stdio.h>
  #include  <math.h>
  int main (void)
 {  int d1, d2, chast, ost, count=0; 
       /* pov:
     printf("Dilene: ");
     scanf("%i", &d1) ;    
     printf("Dilnuk:");
     scanf("%i", &d2);
     
  if(d2==0 || (d1==0)){
   printf("\nError!, vvedit povtorno:\n");
   goto pov;
    return 0;
   }
  else{  */
  
 while(1) {
    printf("Dilene: ");
     scanf("%i", &d1) ;
      do{
       printf("Dilnuk:");
       scanf("%i", &d2);
       if(d2==0) printf (" d2==0 - please, repeat!\n");
      }
    while (d2==0);   
  //int chast, ost, count=0;
      chast=d1/d2;
      ost=d1%d2;
     // printf("\nchast: %i\n  ost: %i\n", chast, ost);
  
  switch(ost){
   case 1: for(count; count<=abs(d2); count++){
    printf("%i ", chast);
   }   
    break;
   case 2: while(count<=abs(d2))  {
     printf("%i ", chast);
     count++;
     }
    break;
   case 3: do{   
     printf("%i ", chast);
     count++;
    }  while(count<=abs(d2));            
     break;
     
    default: continue;
   }
   printf("- chastka, %i - ostacha ", ost);
   break;
      }  
 return 0;
 }