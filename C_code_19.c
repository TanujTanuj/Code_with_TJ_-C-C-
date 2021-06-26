/* Programme --- To find LCM of two numbers */

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,low,lcm;
    
    printf("Enter Integer :");
    
    scanf("%d %d ", &a,&b);
    
    low = (a<b) ? a : b;
    
    //LCM logic
    
    while(1) {
        
        if(low %a == 0 && low%b == 0)
        {
            lcm = low ;
            
            break;
        }
        
        low++;
    }
    printf("The LCM of %d and %d is %d \n", a,b,lcm);
    
    return 0;
}