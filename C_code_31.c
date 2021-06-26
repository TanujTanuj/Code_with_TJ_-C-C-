/* Structures  : 1. These are the user defined datatypes which are made by the help of primitive and derived datatype.
                 2. A structure can store multiple values of different types of datatypes at different memory locations.
                 3. The size of structure is defined by sum of different memory locations
                 4. The size of the smallest structure is 1 byte(char )
                 5. A structure is declared by struct .
                 6. Every structure should be end with a semicolon (;)

                                                                             */


// Maximum size of the structure


#include <stdio.h>

struct stu

{
   int a ;
    char b;   // 1 byte
    float c;

};

void main()

{


         struct stu s;

         printf("Maximum size of structure stu  is %d", sizeof(s));

        return 0;
}


