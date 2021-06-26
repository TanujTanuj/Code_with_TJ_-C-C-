#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int n;
    char c = 'R';
    
    int x = 0 , y = 0;
    
    int steps = 10;
    
    scanf("%d", &n);
    
    while(n) {
        
        switch(c) {
            
            case 'R':
            x = x + steps;
            steps = steps + 10;
            c = 'U';
            break;
            
            case 'U' :
            y = y + steps;
            steps = steps + 10;
            c = 'L';
            break;
            
            case 'L' :
            x = x - steps;
            steps = steps + 10;
            c = 'D';
            break;
            
            case 'D' :
            y = y - steps;
            steps = steps + 10;
            c = 'A';
            break;
            
            case 'A' :
            x = x + steps;
            steps = steps + 10;
            c = 'R';
            break;
            
        }
            n--;
    }
            printf("%d %d",x,y);
            
            return 0;
}