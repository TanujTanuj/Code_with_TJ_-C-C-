/* C programme for half diamond

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;


    for( i =0 ; i <=7 ; i ++)
    {
        for(j = 0 ; j <= 7 -i ; j++){

            printf(" ");
        }

        for(k = 0; k <= i ; k++){

            printf("*");
        }

        printf("\n");


    }

    for(i= 7;i >= 0;i --){

        for(j=0;j <= 7 - i; j ++){

            printf(" ");
        }
        for(k = 0 ; k <= i ; k ++) {

            printf("*");
        }
        printf("\n");
    }
    return 0;
}
