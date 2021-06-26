/* Programme -- To count the number of digits */

#include<stdio.h>

int main()

{
    
    int n,lastdigit,count = 0;
    
    printf("Enter a number:");
    
    scanf("%d",&n);
    
    while(n!= 0){
        
        lastdigit = n%10;
        
        count++;
        
        n=n/10;
    }
    
    printf("The number has %d digits \n",count);
    
    return 0 ;
}