#include<stdio.h>
#include<math.h>

int main()
{
    
    int r ;
    scanf("%d", &r);
    
    if(r >= 20 && r <= 30){
        
        printf("0.3f*3.1459*r*r");
    }
    
    else {
        
        printf("Wrong Display Output");
    }
    
    return 0;
}