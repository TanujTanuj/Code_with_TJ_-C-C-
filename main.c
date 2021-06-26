#include <stdio.h>
int main()
{
    int n,i,ans;

    printf("Enter a number:");

    scanf("%d",&n);

    for(i=2; i<=n/2; i++){     //we divide number by 2 if 0 is the remainder then prime otherwise composite

       if(ans%i== 0){

          goto start;   // we can move to any part of function using goto statement
       }
    }
   start:

    if(ans<i){
        printf("not a prime");


    }
    else{
        printf("prime");
    }

    return 0;
}
