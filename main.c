#include <stdio.h>


int main()
{
   int i,j ;

   printf("Pattern 1 --- Wedge \n \n");

   for( i = 1 ; i <= 5 ; i ++){

    for(j = 1 ; j <= i ; j++)
{
    printf("%d \t ", 1);
  }

  printf("\n");

   }
    return 0;
}
