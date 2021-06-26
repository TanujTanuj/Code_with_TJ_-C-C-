//C programme for a man moving around the plane

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    char c = 'R';
    //L or R or U or D side
    int x =0 , y = 0 ;
    int steps = steps ;

    scanf("%d %d",&n);

    while (n){

         switch(c) {

            case 'R' :
            x = x + steps ;
            steps = steps + 10 ;
            c = 'U';
            break;

            case 'U' :
            y = y + steps ;
            steps = steps + 10 ;
            c = 'L';
            break;

            case 'L' :
            x = x - steps ;
            steps = steps + 10 ;
            c = 'D';
            break;

            case 'D' :
            y = y - steps ;
            steps = steps + 10 ;
            c = 'A';
            break;

            case 'A' :
            x = x + steps ;
            steps = steps + 10 ;
            c = 'R';
            break;

         }
         n--;
    }
    return 0;
}
