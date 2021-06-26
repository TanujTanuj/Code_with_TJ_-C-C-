#include <stdio.h>


int main() {

int A[7] = {4,4,3,2,7,2,4};

int i,j ,k, n= 7;

for( i = 0  ; i < n ; i ++){
    for( j = i + 1 ; j < n ; j ++){

        if(A[i]  == A[j]){

            for(k = j ; k<n ; k++){

                A[k] = A[k+1] ;
            }

            n--;
            j++;

        }
    }
}

for( i = 0 ; i < n ; i ++)

    printf("%d ", A[i]);

return 0 ;
}
