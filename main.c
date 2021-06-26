/* Pointer -- A pointer is a variable which contains address of another variable in it.
              Syntax --- datatype *var_name;



*/

#include <stdio.h>


int main()
{
   int a = 10;

   int *ptr;  // pointer declaration

   ptr = &a;  // pointer stores the address of a

   printf("%d \n", ptr);  // output : address of a

   printf("%d \n",*ptr);   // Output : value of a

   printf("%d\n",&a);   // Cross check verification section

   printf("%d",a);      // Cross check verification section


    return 0;
}
