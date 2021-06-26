/* Union -- Union is a user defined datatype which difeerent datatypes in same memory location
            Union is declared by union stu
            We can define union with many members  but only one member can be used at a time.
*/




#include <stdio.h>

union stu
{
    int a;
    char b;
    float c;
};

int main()
{
   union stu s;
   s.a = 65;
   printf("%c",s.b);

    return 0;
}
