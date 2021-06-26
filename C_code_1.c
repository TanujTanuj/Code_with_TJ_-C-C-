#include<stdio.h>
int main()
{
    int i ;
    char s[23];
    
    scanf("%s",&s);
    
    for(i = 0 ; s[i] != '\0' ; i++)
{
    s[i] = 97 -s[i] + 122 ;
}    
    printf("%s", s);
    
return 0;
}
