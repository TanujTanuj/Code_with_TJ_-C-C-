/* Programme -- Array Multiplication */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3][3],B[3][3],C[3][3],i,j,k,sum ;

    printf("Enter 9 numbers for the first matrix");

    for(i= 0 ; i<= 2 ; i++)
        for(j = 0 ; j <= 2 ; j ++)

        scanf("%d",&A[i][j]);

    printf(" Enter 9 numbers for the second matrix ");



    for( i = 0 ; i <= 2 ; i++)
        for( j = 0 ; j<= 2 ; j ++)
        scanf( "%d", &B[i][j]);



    for( i = 0; i<=2 ;i ++)



        for( j = 0 ; j<= 2 ; j++){

            sum = 0 ;
            for( k = 0 ; k<= 2 ; k++)

            sum = sum + A[i][k]*B[k][j] ;

            C[i][j] = sum ;



    }

        for( i = 0 ; i<= 2 ; i++){

            for(j = 0 ; j<= 2 ; j++)

        printf("%d", C[i][j]);

        printf("\n");
    }


    return 0;
}
