#include <stdio.h>


int main()        //Recursion ---Function calling itself is a recursive function
{
    int n , res ;

    printf("Enter n value :");

    scanf("%d",&n);

     res = fact(n);

     printf("Result %d",res);

}
  int  fact(int n)

     {

         int res ;

         if(n == 0)
         {

             res = 1;
         }
         else {

            res = n * fact(n-1);
         }

         return res;

     }




