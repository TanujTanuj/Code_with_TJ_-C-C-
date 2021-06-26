#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE * fPointer = fopen("tj.txt", "w");  //file opening

    fprintf(fPointer,"Silence is not a lie\n");

    fclose(fPointer);

    return 0;
}
